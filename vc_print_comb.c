/**
 * File              : vc_str_is_alpha.c
 * Author            : Ayana, Gui
 * Date              : Fri 10 Aug 2018
 */

#include <stdio.h>

void vc_print_comb(void) {

    for (int i = '0'; i <= '7'; i++) {
        for (int j = i+1; j <= '8'; j++) {
            for (int k = j+1; k <= '9'; k++) {
                putchar(i);
                putchar(j);
                putchar(k);
                putchar(',');
                putchar(' ');
            }
        }
    }
}