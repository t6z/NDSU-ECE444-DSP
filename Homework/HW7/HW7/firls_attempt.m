clear variables; close all;

Fs = 20e3; T = 1 / Fs;
cutoff_freq = 10e3; % 10kHz cutoff due to 20kHz fixed sampling rate

% ***********************************************
% ***** Importing and manipulating data.xls *****
% ***********************************************
% import data from .xls file
opts = detectImportOptions("data.xls");
labels = opts.VariableNames;
data = readmatrix("data.xls");
clear opts;

% cutoff any data that is above sampling frequency
[minValue,closestIndex] = min(abs(data(:,1) - cutoff_freq));
if(data(closestIndex,1) > cutoff_freq)
    closestIndex = closestIndex - 1;
end
data_cutoff = data([1:closestIndex],:);

clear closestIndex minValue;

% creating variables with necessary data (except for frequency...)
eval(labels(1) + " = data_cutoff(:,1);");
data_needed = [4 5 6];
for i = data_needed
    eval(labels(i) + " = db2mag(data_cutoff(:,i));");
end

clear data data_cutoff data_needed labels;

% ***********************************************
% ***** Slightly windowing desired response *****
% ***********************************************
%freq = [0 100 9e3 10e3];
%
%Window =
%[minValue,minIndex] = min(equalization);
%equalization(1:minIndex,:) = abs(1-equalization(1:minIndex,:));


% **************************************
% ***** Generating FIR FWLS filter *****
% **************************************
om=frequency'*2*T;
eq = equalization;
K = 64;
om(end) = []; eq(end) = [];
h = firls(K,om,eq);


% ********************
% ***** Plotting *****
% ********************
figure();
subplot(311); stem(0:length(h)-1,h,'k'); axis tight;
title("b_n coefficients (not in fixed-point)"); xlabel("n"); ylabel("value");
subplot(312); plot(om*pi/2,abs(eq),'k');
hold on; plot(linspace(0,pi,length(h)),abs(fft(h)),'r'); axis([0 pi 0 2]);
title("Desired vs. FIR FWLS Response"); xlabel("\Omega"); ylabel("Ratio (Out/In)");
subplot(313); plot(linspace(0,pi,length(h)),unwrap(angle(fft(h))),'k'); axis tight;
title("Phase Response of FIR FWLS Filter"); xlabel("\Omega"); ylabel("radians");


% *****************************************
% ***** Generating coefficient header *****
% *****************************************
shift = 10;
GenerateHeader(h,shift);
copyfile("coef.h","C:\Users\tsmal\Documents\NDSU\ECE444\fir_fwls_HyperXCloud2_Normalize");

figure(); plot(linspace(0,pi,length(h)),abs(fft(round(h.*2^shift))),'r');


