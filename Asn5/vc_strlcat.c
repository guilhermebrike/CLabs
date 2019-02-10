/**
 * File              : int vc_strlcat.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

unsigned int vc_strlcat(char *dest, char *src, unsigned int size){
    
    int i = 0;
    
    while (dest[i] != '\0'){
        i++;
    }
    for(int j = 0; j < size; j++){
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';

    return dest;
}