/**
 * File              : int vc_strcapitalize(int n).c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

#include <stdio.h>

#define FALSE 0
#define TRUE 1

char *vc_strlowercase(char *str){
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

char *vc_strcapitalize(char *str){
    
    int boolean_value = TRUE;
    int i =0;
    vc_strlowercase(str);
    while (str[i] != '\0'){
        if (boolean_value == TRUE && str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
            boolean_value = FALSE;
        }else if (str[i] < 'a' || str[i] > 'z'){
            boolean_value= TRUE;
        }else{
        }
        i++;
    }
    return str;
}

// MAIN TO TEST IT

// int main() {
//     // when creating a char array using the [] notation it will convert to a normal char * with \0 at the end
//     char str1[] = "hello, you are the best-programmer; code+coffee+beer+wine!";

//     // str2 we cant use iside our programm, as a bug will happen.
//     char *str2 = "hello, you are the best-programmer; code+coffee+beer+wine!";
//     printf("%s\n", vc_strcapitalize(str1));
//     return 0;
// }