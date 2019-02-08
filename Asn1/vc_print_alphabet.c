/**
 * File              : vc_str_is_alphabet.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_print_alphabet(void) {
    char ch;

    for(ch = 'A'; ch <= 'Z'; ch++) {
        putchar(ch);
    }
}

void vc_print_alphabet2(void) {
    char ltr;

    ltr = 'a';
    while (ltr <= 'z')
    {
        putchar(ltr++);
    }
}
