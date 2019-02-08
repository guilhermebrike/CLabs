/**
 * File              : vc_print_combo.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_print_comb(void) {

    for (int i = '0'; i <= '7'; i++) {
        for (int j = i+1; j <= '8'; j++) {
            for (int k = j+1; k <= '9'; k++) {
                putchar(i);
                putchar(j);
                putchar(k);
                if (n1 != '7' || n2 != '8' || n3 != '9') {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
}
