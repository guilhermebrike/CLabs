/**
 * File              : int vc_str_is_alpha.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

int vc_str_is_alpha(char *str){
    int i = 0;
    
    if (str[i] == '\0'){
        return 1;
    }
    while (str[i] != '\0'){
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
                i++;
                continue;
            }else{
                return 0;
            }
           i++;        
    }
    return 1;
}