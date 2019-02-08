/**
 * File              : vc_str_is_alpha.c
 * Author            : Ayana, Gui
 * Date              : Fri 10 Aug 2018
 */

#include <stdio.h>

void vc_print_combn(int n) {

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= '9'; k++) {
                putchar(j);
                putchar(k);
                putchar(',');
                putchar(' ');
            }
        }
    }
}