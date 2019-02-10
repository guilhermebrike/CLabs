/**
 * File              : int vc_strlcpy.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

unsigned int *vc_strlcpy(char *dest, char *src, unsigned int size);
    
    int i = 0;
    
    while (dest[i] != '\0'){
        i++;
    }
    int j = 0;
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}