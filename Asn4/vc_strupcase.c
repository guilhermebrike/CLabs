/**
 * File              : int vc_strupcase.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

#include <stdio.h>

char *vc_strupcase(char *str){
    
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}

// Main to test the code
// Info 1:  in order not to loose the original string we must use malloc on the function
// Info 2:  In order to test it we can pass a literral String, we must pass a *char with \0 at the end
// int main() {
//     char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
//     char *str2 = "Hello";
//     printf("%s\n", str);
//     printf("%s\n", vc_strupcase(str));
//
//     // this is due to the way string Literal is created in the data segment.
//     printf("%s\n", vc_strupcase(str2));
//     return 0;
// }