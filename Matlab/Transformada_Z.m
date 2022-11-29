syms w T k z n

%gz=(1/2)/((1-z^-1)^2)
%gk=iztrans(gz)

% gk1=(3^(n+1))/4
% gk2=(1/4)*1^n
% pretty(gk1)
% pretty(gk2)
% gz1=ztrans(gk1)
% gz2=ztrans(gk2)
% pretty(gz1)
% pretty(gz2)


% gz3=-(z^-1)/((1-z^-1)^2+1)
% pretty(gz3)
% gk3=iztrans(gz3)

gz=2/(z*(z+0.7)*(z+0.1))
pretty(gz)
gk=iztrans(gz)

% pretty(gk);
% n=0
% gk
