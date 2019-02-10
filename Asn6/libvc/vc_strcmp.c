/**
 * File              : vc_strcmp.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

// Exercise 03: vc_strcmp
#include <stdio.h>
#include <string.h>

int vc_strcmp(char *s1, char *s2) {
    int r = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        if(s1[i] < s2[i]){
            r = -1;
            break;
        } else if(s1[i] > s2[i]) {
            r = 1;
            break;
        }
    }
    return r;
}

int main() {
    char s1[40] = "aa";
    char s2[40] = "aa";
    char s3[40] = "bb";


    int t1 = strcmp(s1, s2);
    int t2 = strcmp(s2, s3);
    int t3 = strcmp(s3, s2);

    int m_t1 = vc_strcmp(s1, s2);
    int m_t2 = vc_strcmp(s2, s3);
    int m_t3 = vc_strcmp(s3, s2);

    return 0;
}

