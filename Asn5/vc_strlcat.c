/**
 * File              : int vc_strlcat.c
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

unsigned int vc_strlcat(char *dest, char *src, unsigned int size){
    int dest_size = vc_strlen(dest);
    int src_size = vc_strlen(src);
    int ideal_size = dest_size + src_size;
    if (size > src_size){
        int j = 0;
        int i = 0;
        for (i = dest_size; i <size-1; i++){
            dest[i] = src[j];
            j++;
        }
        dest[i] = '\0';
    }else if (ideal_size > size){
        return src_size+size;
    }
    return ideal_size;
}