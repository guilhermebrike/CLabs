/**
 * File              : int vc_strlen(char *str).c
 * Author            : Enrique, Masa and Guilherme
 * Date              : Feb 11 2019
 */

#include <stdio.h>

int vc_strlen(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *vc_strdup(char *src){

    char *dest = malloc(vc_strlen(src));

    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}