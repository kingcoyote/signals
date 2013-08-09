#include <stdlib.h>
#include <math.h>

#include "signals.h"

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

int *sgfilter_int(int*, int);
long sgfilter_long(long*, int);
float sgfilter_float(float*, int);
double sgfilter_double(double*, int);

void* sgfilter(void* input, int window, datatype type) {
    void *output;

    switch(type) {
        case DT_INT:
            output = (void*)sgfilter_int((int*)input, window);
            break;
        case DT_LONG:
            break;
        case DT_FLOAT:
            break;
        case DT_DOUBLE:
            break;
    }

    return output;
}

int *sgfilter_int(int* input, int window) {
    int *output = 0;

    switch(window) {
        case 5:
            output += (SGF_5_1 * input[0]) / SGF_5_N;
            output += (SGF_5_2 * input[1]) / SGF_5_N;
            output += (SGF_5_3 * input[2]) / SGF_5_N;
            output += (SGF_5_4 * input[3]) / SGF_5_N;
            output += (SGF_5_5 * input[4]) / SGF_5_N;
            break;
        case 7:
            output += (SGF_7_1 * input[0]) / SGF_7_N;
            output += (SGF_7_2 * input[1]) / SGF_7_N;
            output += (SGF_7_3 * input[2]) / SGF_7_N;
            output += (SGF_7_4 * input[3]) / SGF_7_N;
            output += (SGF_7_5 * input[4]) / SGF_7_N;
            output += (SGF_7_6 * input[5]) / SGF_7_N;
            output += (SGF_7_7 * input[6]) / SGF_7_N;
            break;
        case 9:
            output += (SGF_9_1 * input[0]) / SGF_9_N;
            output += (SGF_9_2 * input[1]) / SGF_9_N;
            output += (SGF_9_3 * input[2]) / SGF_9_N;
            output += (SGF_9_4 * input[3]) / SGF_9_N;
            output += (SGF_9_5 * input[4]) / SGF_9_N;
            output += (SGF_9_6 * input[5]) / SGF_9_N;
            output += (SGF_9_7 * input[6]) / SGF_9_N;
            output += (SGF_9_8 * input[5]) / SGF_9_N;
            output += (SGF_9_9 * input[6]) / SGF_9_N;
            break;
    }

    return output;
}

void sort(long *input, int length) {
    int swap;
    int i;
    int j;
    
    for (i = 0; i < length; i++) {
        for (j = i; j < length - 2; j++) {
            if (input[j] > input[j + 1]) {
                swap = input[j];
                input[j] = input[j+1];
                input[j+1] = swap;
            }
        }
    }
}
