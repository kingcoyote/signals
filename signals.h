#ifndef _SGFILTER_H
#define _SGFILTER_H

typedef enum {
    DT_INT,
    DT_LONG,
    DT_FLOAT,
    DT_DOUBLE
} datatype;

void* sgfilter(void*, int, datatype);

#define rolling_avg(current, new, samples) (current * (samples - 1) + new) / samples

#endif
