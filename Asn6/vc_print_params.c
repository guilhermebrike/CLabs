/**
 * File              : int vc_print_params.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

void vc_print_params(char **str, int param_n){
    int i;
    for (i = 1; i < param_n; i++){
        printf("%s\n",str[i]);
    }
}

int main(int argc, char *argv[]){
    vc_print_params(argv,argc);
    return 0;
}