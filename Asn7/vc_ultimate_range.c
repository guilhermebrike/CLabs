/**
 * File              : int vc_ultimate_range(char *str).c
 * Author            : Enrique, Masa and Guilherme
 * Date              : Feb 11 2019
 */

#include <stdio.h>


int vc_ultimate_range(int **range, int min, int max){
    int i;
    if (min >= max) {
        return 0;
    }
    int size = max -min;
    int  *new_array = (int *) malloc(size * sizeof(int));
    for (i = 0; i < size; i++) {
        new_array[i] = min+i;
    }
    *range = new_array;
    return size;
}