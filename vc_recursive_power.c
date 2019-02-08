/**
 * File              : vc_quickSort.c
 * Author            : Danilo, Gui
 * Date              : Thu 7 Feb 2019 
 */

#include <stdio.h>

int vc_recursive_power(int n, int power){
    if (power < 0)
        return 0;
    else if (power == 0)
        return 1;    
    else 
        return n * vc_recursive_power(n,power - 1);
    
}