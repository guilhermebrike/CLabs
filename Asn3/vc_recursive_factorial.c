/**
 * File              : vc_quickSort.c
 * Author            : Danilo, Gui
 * Date              : Thu 7 Feb 2019
 */

#include <stdio.h>

int vc_recursive_factorial(int n){
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else
        return n * vc_recursive_factorial(n - 1);
}