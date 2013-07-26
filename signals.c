#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "sgfilter.h"

void show_help();

int main(int argc, char *argv[]) {
    if(argc < 2) {
        show_help();
        return 0;
    }

    if (strcmp(argv[1], "--sgfilter") == 0) {
        printf("Savitzky-Golay filter test not yet implemented\n");
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

