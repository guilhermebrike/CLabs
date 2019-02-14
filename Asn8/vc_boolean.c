/**
 * File              : vc_boolean.c
 * Author            : Guilherme and Enrique
 * Date              : Wed 13 Jan 2019
 */

#include <stdio.h>
#include <unistd.h>
#include "vc_boolean.h"

void vc_putstr(char *str) {
    while (*str)
        write(1, str++, 1);
}

t_bool vc_is_even(int n) {
    return ((EVEN(n)) ? TRUE : FALSE);
}

