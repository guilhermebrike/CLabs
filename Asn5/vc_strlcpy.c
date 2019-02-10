/**
 * File              : int vc_strlcpy.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

int vc_strlen(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

unsigned int *vc_strlcpy(char *dest, char *src, unsigned int size){
    int dest_size = vc_strlen(dest);
    int src_size = vc_strlen(src);

    int i = 0;
    while (dest[i] != '\0'){
        dest[i] = '\0';
        i++;
    }
    for(i = 0; i < size -1; i++){
        dest[i] = src[i];
    }
    return src_size;
}