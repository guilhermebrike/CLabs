/**
 * File              : vc_strncpy.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

// Exercise 01: vc_strncpy
#include <stdio.h>
#include <string.h>

char *vc_strncpy(char *dest, char *src, unsigned int n) {
    for (int i = 0; src[i] != '\0'; i++) {
        if (i >= n) {
            dest[i] = '\0';
        } else {
            dest[i] = src[i];
        };
    }
    return dest;
}

int main() {
    char vc_src[40] = "1234sting something testing";
    char vc_dest[100];
    printf("-- %s\n", vc_strncpy(vc_dest, vc_src, 3));

    return 0;
}