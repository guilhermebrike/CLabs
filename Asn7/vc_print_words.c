/**
 * File              : void vc_print_words(char **words).c
 * Author            : Enrique, Masa and Guilherme
 * Date              : Feb 11 2019
 */

#include <stdio.h>
#include <stdlib.h>

void vc_putstr(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
}
void vc_print_words(char **words){
    
    int i = 0;
    while(words[i] != '\0'){
        vc_putstr(words[i]);
        putchar('\n');
        i++;
    }
}