#include <stdio.h>

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void vc_sort_int_table(int *tab, int size) {
    int min;

    for (int i = 0; i < size-1; i++) {
        min = i;
        for (int j = i+1; j < size; ++j) {
            if (tab[min] > tab[j]) {
                min = j;
            }
        }
        swap(&tab[min], &tab[i]);
    }
}

int main() {

    int arr[] = {12, 23, 67, 5};

    vc_sort_int_table(arr, 4);

    int i = 0;
    for (i=0; i < 4; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}