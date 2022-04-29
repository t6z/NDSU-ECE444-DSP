clear variables; close all;
freq = [31, 62, 125, 250, 500, 1000, 2000, 4000, 8000, 16000]';
Hd = [-1.1, -2.2, -4.8, -0.9, 0.6, 2.3, -1.3, 4.5, -3.2, -6.8]';
figure(); stem(freq,Hd,'k'); xlabel('Frequency (Hz)'); ylabel('Select Points of H_d(\Omega) (dB)');
set(gca,'xscal','log')
Fs = 20000; Ts = 1/Fs;

Lh = length(Hd);
K = 10*Lh; k = 0:K-1; Omegak = k*2*pi/K;
Omegap1 = 20*2*pi*Ts; Omegap2 = 20000*2*pi*Ts;
Omegas1 = 10*2*pi*Ts; Omegas2 = 25000*2*pi*Ts;
deltap = 1; deltas = 0.01;
Q = (Omegak<=Omegas1)/(deltas^2) + (Omegak>=Omegap1 & Omegak<=Omegap2)/((deltap/2)^2) ...
    + (Omegak>=Omegas2)/(deltas^2); 
Q(fix(K/2)+2:end) = Q(round(K/2):-1:2);

stem(Q)

l = (0:Lh-1)'; 
a = exp(1j*l*Omegak)*Q.'/K; 
b = exp(1j*l*Omegak)*(Hd.*Q/K).';
A = toeplitz(a); 
h = (A\b);
n = (0:Lh-1)';

figure(); subplot(211); stem(n,h,'k');

Omega = linspace(0,pi,1001); 
H = polyval(h,exp(1j*Omega)).*exp(-1j*(Lh-1)*Omega);
subplot(212); 
plot(Omega,abs(H));
hold on; 
plot(linspace(0,max(Omega),200),abs(Hd),'k');

