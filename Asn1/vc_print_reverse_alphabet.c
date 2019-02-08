/**
 * File              : vc_str_is_alpha.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_print_reverse_alphabet(void) {
    char ch;

    for(ch = 'Z'; ch >= 'A'; ch--) {
        putchar(ch);
    }
}

void vc_print_reverse_alphabet2(void)
{
    char ltr;

    ltr = 'z';
    while (ltr >= 'a')
        putchar(ltr--);
}