fc=63;
wc=2*pi*fc;
Ts=0.0001;
num=[wc];
den=[1 wc];
Gs=tf(num, den)
Gz=c2d(Gs, Ts)