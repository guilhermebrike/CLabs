/**
 * File              : vc_print_combo2.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_print_comb(void) {

    for (int i = '0'; i <= '9'; i++) {
        for (int j = '0'; j <= '9'; j++) {
            for (int k = '0'; k <= '9'; k++) {
                for (int m = '0'; m <= '9'; m++) {
                    if (i+j == k+m) {

                    } else {
                        putchar(i);
                        putchar(j);
                        putchar(' ');
                        putchar(k);
                        putchar(m);
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
}

void vc_print_comb2(void)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while (i < 100)
    {
        k = i + 1;
        while (k < 100)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(k / 10 + '0');
            putchar(k % 10 + '0');
            if ((i / 10 != 9) || (i % 10 != 8))
            {
                putchar(',');
                putchar(' ');
            }
            k++;
        }
        i++;
    }
    putchar('\n');
}

