#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "sgfilter.h"

void show_help();

int main(int argc, char *argv[]) {
    if(argc < 2) {
        show_help();
        return 0;
    }

    srand(time(NULL));

    if (strcmp(argv[1], "--sgfilter") == 0) {
        int *input = malloc(sizeof(int) * 5);
        input[0] = rand() % 200;
        input[1] = rand() % 200 + 800;
        input[2] = rand() % 200 + 1200;
        input[3] = rand() % 200 + 1400;
        input[4] = rand() % 200 + 1200;

        printf("Input is: %d, %d, %d, %d, %d\n", input[0], input[1], input[2], input[3], input[4]);
        printf("Savitzky-Golay filter:\n");
        printf("  Window size: %i\n", 5);
        printf("  Output: %i\n", sgfilteri(input, 5));
        return 0;
    } else if(strcmp(argv[1], "--outlier") == 0) {
        printf("Outlier exclusion filter test not yet implemented\n");
        return 0;
    } else if (strcmp(argv[1], "--rolling") == 0) {
        printf("Rolling average test not yet implemented\n");
        return 0; 
    } 

    return 0;
}

void show_help() {
    printf("Usage:\n");
    printf("  --sgfilter     Perform a test with the Savitzky-Golay filter.\n");
    printf("  --outlier      Perform a test with outlier exclusion.\n");
    printf("  --rolling      Perform a test with rolling averages.\n");
}

