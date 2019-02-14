/**
 * File              : vc_param_to_tab.c
 * Author            : Guilherme and Enrique
 * Date              : Wed 13 Jan 2019
 */

#include "vc_stock.h"
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int count_strings(char *str) {
    int count_strings = 0;
    int i = 0;
    int boolean_space = TRUE;

    while (str[i] != '\0') {
        if (str[i] >= 0 && str[i] <= 32) {
            if (boolean_space == TRUE) {
                count_strings++;
                boolean_space = FALSE;
            }
        } else {
            boolean_space = TRUE;
        }
        i++;
    }
    return ++count_strings;
}

int count_characters(char *src, int start) {
    int count = 0;
    int i = start;
    while (src[i] != '\0') {
        if (src[i] >= 33 && src[i] <= 126) {
            count++;
        } else {
            break;
        }
        i++;
    }
    return count;
}

/**
 * The Function returns an Array of Strings that were seppared by spaces and non printable characters.
 * The last String is null, in a way to tell when is the end of the array.
 */
char **vc_split_whitespaces(char *src) {
    int dest_size = count_strings(src);
    char **dest = (char **) malloc((dest_size + 1) * sizeof(char *));
    int dest_position = 0;
    int string_position = 0;
    int start_src = 0;
    int string_size = 0;

    while (src[start_src] != '\0') {

        if (src[start_src] >= 0 && src[start_src] <= 32) {
            start_src++;
            continue;
        }
        string_size = count_characters(src, start_src);

        dest[dest_position] = (char *) malloc(string_size * sizeof(char));

        for (int j = start_src; j < string_size + start_src; j++) {
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


int vc_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *vc_strdup(char *src) {
    char *dest = malloc(vc_strlen(src));
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i]; //
        i++;
    }
    dest[i] = '\0';

    return dest;
}

struct s_stock *vc_param_to_tab(int ac, char **av) {
    t_stock *new_struct = (t_stock *) malloc(sizeof(t_stock) * (ac + 1));
    int i;
    for (i = 0; i < ac; i++) {
        new_struct[i].size_param = vc_strlen(av[i]);
        new_struct[i].str = av[i];
        new_struct[i].copy = vc_strdup(av[i]);
        new_struct[i].words = vc_split_whitespaces(av[i]);
    }
    new_struct[ac].size_param = 0;
    new_struct[ac].str = '\0';
    new_struct[ac].copy = "\0";
    new_struct[ac].words = "\0";

    return new_struct;
}
