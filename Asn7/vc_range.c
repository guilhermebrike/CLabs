/**
 * File              : vc_range.c
 * Author            : Masa, Guilherme and Enrique
 * Date              : Mon 11 Jan 2019
 */

#include <stdio.h>
#include <stdlib.h>

int *vc_range(int min, int max) {
    int i;
    if (min >= max) {
        return NULL;
    }
    int size = max -min;
    int  *numbers = (int *) malloc(size * sizeof(int));
    for (i = 0; i < size; i++) {
        numbers[i] = min+i;
    }
    return numbers;
}