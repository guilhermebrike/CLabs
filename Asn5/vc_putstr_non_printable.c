/**
 * File              : int vc_putstr_non_printable.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>

void vc_putstr_non_printable(char *str){
    int i = 0;
    while (str[i] != '\0'){
            if (str[i] >= 1 && str[i] <= 31){
                int n = str[i];
                putchar('\\');
                while(n!=0) {    
                    int mod_number  = 0; 
                    mod_number = n % 16; 
                    if(mod_number < 10) { 
                        mod_number = mod_number + 48; 
                        putchar(mod_number);
                    }else{ 
                        mod_number = mod_number + 87; 
                        putchar(mod_number);
                        } 
                    n = n/16; 
                }
                i++;
                continue;
            }else{
                putchar(str[i]);
            }
           i++;        
    }
}