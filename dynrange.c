#include "signals.h"
#include "dynrange.h"

void dynrange(long *input, int length) {
    int n;
    long avg = 0;
    long range;

    for(n = 0; n < length; n++) {
        avg += input[n] / length;
    }
    
    sort(input, length);
    
    range = input[length-1] - input[0];
    
    for(n = 0; n < length; n++) {
        if(input[n] < avg - (range/4) || input[n] > avg + (range/4)) {
            input[n] = avg;
        }
    }   
}
