#include "random_generator.h"

unsigned int seed;

void init_timer() {
    FILE *fptr = fopen(timer_path, "w");
    if (fptr == NULL) {
        printf("Error reading /dev/timer\n");
        exit(1);
    }
    char *mode = "1";
    fwrite(mode, 1, 1, fptr);
    fclose(fptr);
}

void finish_timer() {
    FILE *fptr = fopen(timer_path, "w");
    if (fptr == NULL) {
        printf("Error reading /dev/timer\n");
        exit(1);
    }
    char *mode = "0";
    fwrite(mode, 1, 1, fptr);
    fclose(fptr);
}

int get_time() {
    char char_seed[12];
    FILE *fp;

    fp = fopen(timer_path, "rb");
    fread(&char_seed, sizeof(char), 11, fp);

    int current_time = strtol(char_seed, NULL, 10);
    fclose(fp);
    
    return current_time;
}

int get_random(int seed) {
    int result = (seed >> 1) | ((((seed >> 0) ^ (seed >> 2) ^ (seed >> 3) ^ (seed >> 5)) & 1) << 15);
    return result;
}