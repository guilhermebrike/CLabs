/**
 * File              : vc_fibonacci.c
 * Author            : Danilo, Gui
 * Date              : Thu 7 Feb 2019 
 */

#include <stdio.h>

int vc_fibonacci(int n){
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else if (n == 1){
        return 1;
    }else{
        return vc_fibonacci(n-1) + vc_fibonacci(n -2);
    }
}