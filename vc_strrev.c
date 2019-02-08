/**
 * File              : vc_strrev.c
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

char *vc_strrev(char *str) {

    int size = vc_strlen(str) - 1;

    for (int i =0; i <= size / 2; i++) {
        char temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        size--;
    }
    return str;

}
