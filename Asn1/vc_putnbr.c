/**
 * File              : vc_putnbr.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_putnbr(int nb) {

    while(nb != 0){
        putchar(nb % 10 +'0');
        nb = nb/10;
    }
}

void vc_putnbr2(int nb) {

    if (nb < 0) {
        nb = -nb;
        putchar('-');
    }
    if (nb < 10) {
        putchar(nb + '0');
    }
    else {
        vc_putnbr2(nb / 10);
        vc_putnbr2(nb % 10);
    }
}


