#include <stdlib.h>

int main(){
    int *arr;

    if (!(arr = malloc(sizeof(int) * 20)))
        return NULL;
    
}