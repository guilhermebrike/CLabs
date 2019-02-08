/**
 * File              : vc_str_is_alpha.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_print_numbers(void) {
    char ch;

    for(ch = '0'; ch <= '9'; ch++) {
        putchar(ch);
    }
}

void vc_print_numbers2(void)
{
    char nbr;

    nbr = '0';
    while (nbr <= '9')
        putchar(nbr++);
}
