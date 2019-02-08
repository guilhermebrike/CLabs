/**
 * File              : vc_is_negative.c
 * Author            : Ayana, Gui
 * Date              : Tue 5 Feb 2019
 */

#include <stdio.h>

void vc_is_negative(int n) {
    char ch;

   if (n < 0) {
       putchar('N');
   } else {
       putchar('P');
   }

}

