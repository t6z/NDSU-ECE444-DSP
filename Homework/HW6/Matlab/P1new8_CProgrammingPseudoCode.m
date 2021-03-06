% ECE 444 HW6
% Fall 2020
% Thomas Smallarz
% Works for MATLAB R2019a, 
close all; clear variables;

% F is the starting frequencies for all-pass filter
F = [250 500 1000 2000];
K = 20;
Fs = 10000;
%% Design Low-Pass Inverse Chebyshev Prototype Filter with normalized freq
% Based on Ex. 2.17
alphap = 2; % pass-band alpha of 2dB
alphas = 20; % stop-band alpha of 20dB
omegap = 1; % prototype filter cutoff freq of 1 rad/sec
% calculate stop-band frequency based on alpha's and omega
omegas = omegap*cosh(acosh(sqrt((10^(alphas/10)-1)/(10^(alphap/10)-1)))/K);
epsilon = 1/sqrt(10^(alphas/10)-1); 
k = 1:K;

% calculate poles
pk = -omegap*sinh(asinh(1/epsilon)/K)*sin(pi*(2*k-1)/(2*K))+...
    1j*omegap*cosh(asinh(1/epsilon)/K)*cos(pi*(2*k-1)/(2*K));
pk = omegap*omegas./pk; 

% calculate zeros
zk = 1j*omegas.*sec(pi*(2*k-1)/(2*K));

% calculate coefficients of expanded form based on poles/zeros
B = prod(pk./zk)*poly(zk); A = poly(pk);

% calculate stop band frequencies
StopFreq = [];
for i = 1:length(F)
    temp1 = ((omegas)^3 - 2*pi*F(i)*2*pi*(Fs/2-F(i))) / (2*pi*F(i)*(2*pi*(Fs/2-F(i))-2*pi*F(i)));
    temp2 = ((omegas)^3 - 2*pi*F(i)*2*pi*(Fs/2-F(i))) / (-2*pi*F(i)*(2*pi*(Fs/2-F(i))-2*pi*F(i)));
    
    StopFreq = [StopFreq; temp1, temp2];
end


%% Digital Bandpass IIR Filter Conversion
% Based on Ex. 8.7
Fs = 10000; % 10kHz sampling frequency
T = 1/Fs; % Sampling period.
coef = zeros(length(F),K,3);
B_ = zeros(length(F),K,3);
A_ = zeros(length(F),K,3);
Gain = [];
for k = 1:length(F) % lower pass band frequencies (Hz)
    fp1 = F(k);
    fp2 = Fs / 2 - fp1; % upper pass band frequencies (Hz)

    wp1 = 2*pi.*fp1; wp2 = 2*pi.*fp2; % convert from Hz to Rad/Sec
    wp1_w = tan(wp1.*T/2); % SIMPLIFIED procedure for pre-warped lower passband omegas
    wp2_w = tan(wp2.*T/2); % SIMPLIFIED procedure for pre-warped upper passband omegas

    c1 = (wp1_w*wp2_w - 1) / (wp1_w*wp2_w + 1);
    c2 = (wp2_w - wp1_w) / (wp1_w*wp2_w + 1);

    % *******************************
    % ******* COMPUTING P/Z's *******
    % *******************************

    % computing zeros/poles for H(z)
    for i = 1:length(zk)
       Zdig(i,:) = roots([1, 2*c1./(1-c2*zk(i)), (1+c2*zk(i))./(1-c2*zk(i))]);
    end

    for i = 1:length(pk)
       Pdig(i,:) = roots([1, 2*c1./(1-c2*pk(i)), (1+c2*pk(i))./(1-c2*pk(i))]);
    end

    % *************************
    % ***** SORTING P/Z's *****
    % *************************

    % appending columns of zeros, then sorting by imag value
    temp = -j.*Zdig;
    temp2 = sort([temp(:,1);temp(:,2)],'ComparisonMethod','real');
    Zdig_sort = j.*temp2;
    clear temp temp2;

    temp = -j.*Pdig;
    temp3 = sort([temp(:,1);temp(:,2)],'ComparisonMethod','real');
    Pdig_sort = j.*temp3;
    clear temp temp2;

    % **************************************
    % ***** CREATING 2nd ORDER SYSTEMS *****
    % **************************************

    % create 2nd order real systems to cascade
    I = length(Zdig_sort);
    for i = 1:I/2
        Zdig2(i,:) = poly([Zdig_sort(i,1),conj(Zdig_sort(i,1))]);
    end

    I = length(Pdig_sort);
    for i = 1:I/2
        Pdig2(i,:) = poly([Pdig_sort(i,1),conj(Pdig_sort(i,1))]);
    end

    % **************************
    % ***** COMPUTING H(Z) *****
    % **************************
    Omega = linspace(0,pi,10001); H = 1;
    % evaluate all 2nd order Zero polynomials over 0->Pi
    for i = 1:length(Zdig2)
        H = H .* polyval(Zdig2(i,:),exp(1j*Omega));
    end
    % evaluate all 2nd order Pole polynomials over 0->Pi
    for i = 1:length(Pdig2)
        H = H ./ polyval(Pdig2(i,:),exp(1j*Omega));
    end
    % multiply by gain factor
    G = B(1)/A(1)*prod(1/c2-zk)/prod(1/c2-pk);
    Gain = [Gain;G];
    H = H.*G;
    % ********************
    % ***** PLOTTING *****
    % ********************
    % |H(z)|
    figure(2*k-1); set(gcf,'Position',[970+20*k,200-30*k,820,800]);
    subplot(2,1,1);
    plot(Omega/T,abs(H),'k-'); axis([0 pi/T -0.05 1.05]);
    xlabel("\omega"); ylabel("|H(z)|");
    
    % add No Go Zones
    
    % 20log10(H(z))
    subplot(2,1,2);
    plot(Omega/T,20*log10(abs(H)),'k-'); 
    xlabel("\omega"); ylabel("20log_1_0|H(z)|");   
    
    figure(2*k); set(gcf,'Position',[20+20*k,200-30*k,820,800]);
    plot(real(Zdig(:)),imag(Zdig(:)),'bo'); hold on;
    plot(real(Pdig(:)),imag(Pdig(:)),'rx'); hold on;

    plot(real(exp(j.*[0:0.001:2*pi])),imag(exp(j.*[0:0.001:2*pi])),'k');

    title("P/Z Plot of Discrete-Time Bandpass Inverse Chebyshev Filter with Pass-band range of " + fp1 + "Hz to " + fp2 + "Hz");
    grid on; axis([-1 1 -1 1]); xlabel("Real Axis"); ylabel("Imaginary Axis");
    xline(0); yline(0); 
    
    % ***********************
    % ***** SAVING COEF *****
    % ***********************
    %coef(k,:,:) = [Zdig2(:,2), Pdig2(:,2), Pdig2(:,3)];
    B_(k,:,:) = Zdig2;
    A_(k,:,:) = Pdig2;
end

% I didn't want to rename my A and B vars used in LP proto filter design
B = B_;
A = A_;

%% Structure for C Code and y[n] response to frequencies that should be zero
% ADC INPUT RELATED
    % adding bad frequencies to show it works
    kill_freq = unique(round(abs(atan(imag(Zdig_sort) ...
        ./real(Zdig_sort))),10))./T; % kill freq in rad/sec
    pass_freq = [2157;2546;2620;2759].*2*pi;
u = @(n) (n>0) + 0.5.*(n==0);
N = 1001;
for m = 1:length(kill_freq)
    X = @(t) sin(kill_freq(m)*t);
    Y = [];
    filter_select = 4;
    buf = zeros(K,2); % col 1 is (n-1) term, col 2 is (n-2) term
    B_coef = B(:,:,2);
    A_coef = A(:,:,[2 3]);

    for n = 1:N
        x = X(n*T); % adc input
        x = real(Gain(filter_select))*x;
        for k = 1:K % for each stage
            v = x - A_coef(filter_select,k,1).*buf(k,1) - A_coef(filter_select,k,2).*buf(k,2);
            y = v + B_coef(filter_select,k,1).*buf(k,1) + buf(k,2);
            buf(k,2) = buf(k,1);
            buf(k,1) = v;
            x = y;
        end

        Y = [Y;y];
    end

    figure(); subplot(211); plot((1:N).*T,X((1:N).*T),'k'); xlabel('seconds'); ylabel('x[n]');
    subplot(212); plot((1:N).*T,Y,'k'); xlabel('seconds'); ylabel('y[n]');

end

% Zdig_r = round(Zdig_sort,6);
% Pdig_r = round(Pdig_sort,6);
% H_TEST = zpk(Zdig_r,Pdig_r,Gain,T);
% figure(); step(H_TEST);

%% Create Header File
GenerateHeader(B_coef,A_coef,Gain);




