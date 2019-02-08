/**
 * File              : vc_strstr.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

// Exercise 02: vc_strstr
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char *vc_strstr(char *str, char *to_find) {;
    int strIndex = 0;
    for (strIndex = 0; str[strIndex] != '\0'; strIndex++) {
        char *result = ((char *)malloc(sizeof(char) * sizeof(str)));
        for (int toFindIndex = 0; to_find[toFindIndex] == str[strIndex + toFindIndex]; ++toFindIndex) {
            char char1 = &str[strIndex];
            result[toFindIndex] = to_find[toFindIndex];
            if (to_find[toFindIndex] == '\0') {
                return result;
            }
        }
    }
    return NULL;
}

int main() {

    // testing original code
    const char haystack[30] = "SomethingTesting";
    const char needle[10] = "Testing";
    char *ret;

    ret = strstr(haystack, needle);

    printf("The substring is: %s\n", ret);

    // my code
    char *myRet;
    myRet = vc_strstr(haystack, needle);
    printf("The substring is: %s\n", myRet);

    return 0;
}

