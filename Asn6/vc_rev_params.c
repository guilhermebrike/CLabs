/**
 * File              : int vc_rev_params.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

void vc_rev_params(char **str, int param_n){
    int i;
    for (i = param_n -1; i >= 1; i--){
        printf("%s\n",str[i]);
    }
}

int main(int argc, char *argv[]){
    vc_rev_params(argv,argc);
    return 0;
}