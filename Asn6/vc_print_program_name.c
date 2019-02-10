/**
 * File              : int vc_print_program_name.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

void vc_print_program_name(char **str){
    printf("%s\n",str[0]);
}

int main(int argc, char *argv[]){
    vc_print_program_name(argv);
    return 0;
}