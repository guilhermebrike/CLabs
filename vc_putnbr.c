/**
 * File              : vc_str_is_alpha.c
 * Author            : Ayana, Gui
 * Date              : Fri 10 Aug 2018
 */

#include <stdio.h>

void vc_putnbr(int nb) {
    putchar('"');
    while(nb != 0){
        putchar(nb % 10 +'0');
        nb = nb/10;
    }
    putchar('"');
}