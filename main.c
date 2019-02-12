/**
 * File              : void vc_split(char *str, char *charset).c
 * Author            : Enrique, Masa and Guilherme
 * Date              : Feb 11 2019
 */
#include <stdio.h>
#include <stdlib.h>

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


int main() {
    // Call the method

    int *numbers = NULL;
    int size = vc_ultimate_range(&numbers,2,10);
    for(int i = 0; i < size; i++){
        printf("%d",numbers[i]);
        putchar('\n');
    }

    printf("SIZE: %d\n",size);
    return 0;
}