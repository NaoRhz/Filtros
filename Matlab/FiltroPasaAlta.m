fc=70;
wc=2*pi*fc;
Ts=0.0001;
num=[1 (wc/10)];
den=[1 wc];
Gs=tf(num, den)
Gz=c2d(Gs, Ts)
