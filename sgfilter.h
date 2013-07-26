#ifndef _SGFILTER_H
#define _SGFILTER_H

#include <math.h>
#include <stdlib.h>

#define SGF_5_1    -3
#define SGF_5_2    12
#define SGF_5_3    17
#define SGF_5_4    12
#define SGF_5_5    -3
#define SGF_5_N    35

#define SGF_7_1    -2
#define SGF_7_2     3
#define SGF_7_3     6
#define SGF_7_4     7
#define SGF_7_5     6
#define SGF_7_6     3
#define SGF_7_7    -2
#define SGF_7_N    21

#define SGF_9_1   -21 
#define SGF_9_2    14
#define SGF_9_3    39
#define SGF_9_4    54
#define SGF_9_5    59
#define SGF_9_6    54
#define SGF_9_7    39
#define SGF_9_8    14
#define SGF_9_9   -21
#define SGF_9_N   231

int sgfilteri(int*, int);
long sgfilterl(long*, int);
float sgfilterf(float*, int);

#endif
