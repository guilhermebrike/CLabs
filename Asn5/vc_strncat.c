/**
 * File              : int vc_strcat.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

char *vc_strncat(char *dest, char *src, int n){
    
    int i = 0;
    
    while (dest[i] != '\0'){
        i++;
    }
    for(int j = 0; j < n; j++){
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';

    return dest;
}