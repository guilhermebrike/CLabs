/**
 * File              : vc_strlen.c
 * Author            : Ayana, Gui
 * Date              : Wed 6 Feb 2019
 */

int vc_strlen(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

