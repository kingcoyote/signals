#include "sgfilter.h"

int sgfilteri(int* input, int window) {
    int output = 0;

    switch(window) {
        case 5:
            output += SGF_5_1 * input[0];
            output += SGF_5_2 * input[1];
            output += SGF_5_3 * input[2];
            output += SGF_5_4 * input[3];
            output += SGF_5_5 * input[4];
            output /= SGF_N;
            break;
        case 7:
            break;
        case 9:
            break;
    }

    return output;
}
