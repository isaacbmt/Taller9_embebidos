#include "random_generator.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    init_timer();

    int start_time =  get_time();

    for (int i = 0; i < 5; i++) {
        printf("Numero aleatorio: %d\n", get_random_int() % 10);
    }
    int stop_time =  get_time();
    
    printf("Tiempo de ejecucion: %d\n", stop_time - start_time);
    finish_timer();
    return 0;
}