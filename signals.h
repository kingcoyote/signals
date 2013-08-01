#ifndef _SGFILTER_H
#define _SGFILTER_H

int sgfilteri(int*, int);
long sgfilterl(long*, int);
float sgfilterf(float*, int);
double sgfilterd(double*, int);

#define rolling_avg(current, new, samples) (current * (samples - 1) + new) / samples

#endif
