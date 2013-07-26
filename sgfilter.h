#ifndef _SGFILTER_H
#define _SGFILTER_H

#include <math.h>
#include <stdlib.h>

#define SGF_5_1    -3
#define SGF_5_2    12
#define SGF_5_3    17
#define SGF_5_4    12
#define SGF_5_5    -3
#define SGF_N      35

int sgfilteri(int*, int);
long sgfilterl(long*, int);
float sgfilterf(float*, int);

#endif
