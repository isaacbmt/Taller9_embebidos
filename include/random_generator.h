#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

char *timer_path = "/dev/timer";

void init_timer();

void finish_timer();

int get_random(int seed);

int get_time();


