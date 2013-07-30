#include "signals.h"

int sgfilteri(int* input, int window) {
    int output = 0;

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

long sgfilterl(long* input, int window) {
    long output = 0;

    return output;
}

float sgfilterf(float* input, int window) {
    float output = 0.0;

    return output;
}

double sgfilterd(double* input, int window) {
    double output = 0;

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