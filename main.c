#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "signals.h"
#include "commander.c/src/commander.h"

void sgfilter(command_t *self);
void outlier(command_t *self);
void rolling(command_t *self);

int main(int argc, char **argv) {
    command_t cmd;

    command_init(&cmd, argv[0], "0.0.1");
    command_option(&cmd, "-s", "--sgfilter", "Perform a Savitzky-Golay filter", sgfilter);
    command_option(&cmd, "-o", "--outlier", "Sort the items and drop the first and last quartile", outlier);
    command_option(&cmd, "-r", "--rolling", "Perform a rolling average on an item", rolling);
    command_parse(&cmd, argc, argv);

    command_free(&cmd);

    return 0;
}

void sgfilter(command_t *self) {

}

void outlier(command_t *self) {

}

void rolling(command_t *self) {

}

