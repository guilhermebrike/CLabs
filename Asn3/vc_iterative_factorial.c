/**
 * File              : vc_quickSort.c
 * Author            : Danilo, Gui
 * Date              : Thu 7 Feb 2019
 */

#include <stdio.h>


int iterative_factorial(int n){
    if (n < 0){
        return 0;
    }else if (n == 0){
        return 1;
    }else{
        int fat = 1;
        for (int i = 1; i <=n; i++){
        fat *= i;
        }
    return fat;
    }
}