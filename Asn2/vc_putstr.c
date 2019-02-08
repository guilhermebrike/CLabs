/**
 * File              : vc_putstr.c
 * Author            : Ayana, Gui
 * Date              : Wed 6 Feb 2019
 */

void vc_putstr(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
}
