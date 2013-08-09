#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "signals.h"
#include "commander.c/src/commander.h"

void sgfilter_cli(command_t *self);
void iqrange_cli(command_t *self);
void rolling_cli(command_t *self);

int main(int argc, char **argv) {
    command_t cmd;

    command_init(&cmd, argv[0], "0.0.1");
    command_option(&cmd, "-s", "--sgfilter", "Perform a Savitzky-Golay filter", sgfilter_cli);
    command_option(&cmd, "-i", "--iqrange", "Perform an innerquartile range filter", iqrange_cli);
    command_option(&cmd, "-r", "--rolling", "Perform a rolling average on an item", rolling_cli);
    command_parse(&cmd, argc, argv);

    command_free(&cmd);

    return 0;
}

void sgfilter_cli(command_t *self) {

}

void iqrange_cli(command_t *self) {

}

void rolling_cli(command_t *self) {

}

