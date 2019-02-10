/**
 * File              : int vc_str_is_numeric.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

int vc_str_is_numeric(char *str){
    int i = 0;
    
    if (str[i] == '\0'){
        return 1;
    }
    while (str[i] != '\0'){
            if (str[i] >= '0' && str[i] <= '9'){
                i++;
                continue;
            }else{
                return 0;
            }
           i++;        
    }
    return 1;
}