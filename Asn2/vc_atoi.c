/**
 * File              : vc_atoi.c
 * Author            : Ayana, Gui
 * Date              : Wed 6 Feb 2019
 */

int vc_atoi(char *str) {

    int i = 0;
    int number = 0;
    while (str[i] != '\0') {
        number = (number * 10) + (str[i] - '0');
        i++;
    }

    return number;
}
