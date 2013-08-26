#ifndef _SIGNALS_H_
#define _SIGNALS_H_

void sort(long*, int);
long average(long*, int);

#define rolling_avg(current, new, samples) (current * (samples - 1) + new) / samples

#endif
