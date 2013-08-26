#include <stdlib.h>
#include <math.h>

#include "signals.h"

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

long average(long *input, int length) {
    long out = 0;
    int i = 0;

    for(i = 0; i < length; i++) {
        out += input[i];
    }

    return out / length;
}
