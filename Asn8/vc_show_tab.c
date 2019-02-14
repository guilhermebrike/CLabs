/**
 * File              : vc_show_tab.c
 * Author            : Guilherme and Enrique
 * Date              : Wed 13 Jan 2019
 */

#include <stdio.h>
#include "vc_stock.h"

void vc_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
}

void vc_print_words(char **words) {
    int i = 0;
    while (words[i] != '\0') {
        vc_putstr(words[i]);
        putchar('\n');
        i++;
    }
}

void vc_show_tab(struct s_stock *stock) {
    int i = 1;
    while (stock[i].str != '\0') {
        vc_putstr(stock[i].str);
        putchar('\n');
        printf("%d", stock[i].size_param);
        putchar('\n');
        vc_print_words(stock[i].words);
        putchar('\n');
        i++;
    }
}