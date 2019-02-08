/**
 * File              : vc_strlowcase.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

#include <stdio.h>

char *vc_strlowcase(char *str){
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}