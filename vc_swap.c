/**
 * File              : vc_swap.c
 * Author            : Ayana, Gui
 * Date              : Wed 6 Feb 2019
 */

void vc_swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

