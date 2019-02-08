/**
 * File              : vc_strcpy.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

// Exercise 00: vc_strcpy
#include <stdio.h>
#include <string.h>

char *vc_strcpy(char *dest, char *src) {
    for(int i=0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}

int main() {
    char src[40];
    char dest[100];

    // testing original
    // memset(dest, '\0', sizeof(dest));
    // strcpy(src, "testing the original implementation");
    // strcpy(dest, src);

    // implementation
    char vc_src[40] = "1testing something testing";
    char vc_dest[100];
    printf("%s\n", vc_strcpy(vc_dest, vc_src));



    return 0;
}