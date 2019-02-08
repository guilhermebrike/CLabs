/**
 * File              : vc_quickSort.c
 * Author            : Danilo, Gui
 * Date              : Thu 7 Feb 2019 
 */

#include <stdio.h>

int iterative_power(int n, int power){
    if (power < 0){
        return 0;
    }else if (power == 1){
        return n;
    }
    else{
        int result = n;
        for(int i = 1; i < power; i++){
            n = result * n;
        }
    }
    return n;

}