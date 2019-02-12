/**
 * File              : char ** main_to_test_vc_print_word.c
 * Author            : Enrique, Masa and Guilherme
 * Date              : Feb 11 2019
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void vc_putstr(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
}

int count_strings(char *str){
    int count_strings = 0;
    int i =0;
    int boolean_space = TRUE;

    while(str[i] != '\0'){
        if (str[i] >= 0 && str[i] <=32){
            if(boolean_space == TRUE){
                count_strings++;
                boolean_space = FALSE;
            }
        }else{
            boolean_space = TRUE;
        }
        i++;
    }
    return ++count_strings;
}

int count_characters(char *src,int start){
    int count =0;
    int i = start;
    while (src[i] != '\0'){
        if (src[i] >= 33 && src[i] <= 126){
           count++;
        }else{
            break;
        }
        i++;
    }
    return count;
}

void vc_print_words(char **words){
    
    int i = 0;
    while(words[i] != '\0'){
        vc_putstr(words[i]);
        putchar('\n');
        i++;
    }
}

/**
 * The Function returns an Array of Strings that were seppared by spaces and non printable characters.
 * The last String is null, in a way to tell when is the end of the array.
 */
char **vc_split_whitespaces(char *src){
    int dest_size = count_strings(src);
    char **dest = (char **) malloc((dest_size + 1) * sizeof(char *));
    int dest_position = 0;
    int string_position = 0;
    int start_src = 0;
    int string_size = 0;

    while (src[start_src] != '\0'){

        if (src[start_src] >= 0 && src[start_src] <=32){
            start_src++;
            continue;
        }
        string_size = count_characters(src,start_src);

        dest[dest_position] = (char *) malloc(string_size * sizeof(char));

        for(int j = start_src; j < string_size + start_src; j++){
            dest[dest_position][string_position] = src[j];
            string_position++;
        }
        dest[dest_position][string_position] = '\0';
        string_position = 0;
        dest_position++;
        start_src = start_src + string_size;
    }

    dest[dest_size] = '\0';
    
    return dest;
}


int main() {

    char src[] = "HELLO  \n  THE       WORLD";
    char ** src2 = vc_split_whitespaces(src);
    vc_print_words(src2);
    return 0;
}