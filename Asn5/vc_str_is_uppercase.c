/**
 * File              : int vc_str_is_uppercase.c
 * Author            : Guilherme
 * Date              : Tue 8 Feb 2019
 */

#include <stdio.h>

int vc_str_is_uppercase(char *str){
    int i = 0;
    
    if (str[i] == '\0'){
        return 1;
    }

    while (str[i] != '\0'){
            if (str[i] >= 'A' && str[i] <= 'Z'){
                i++;
                continue;
            }else{
                return 0;
            }
           i++;        
    }
    return 1;
}