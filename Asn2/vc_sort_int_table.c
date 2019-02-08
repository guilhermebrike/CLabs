/**
 * File              : vc_sort_int_table.c
 * Author            : Ayana, Gui
 * Date              : Wed 6 Feb 2019
 */

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