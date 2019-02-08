#include <stdio.h>

int vc_atoi(char *str) {

    int i = 0;
    int number = 0;
    while (str[i] != '\0') {
        number = number * 10 + str[i];
        i++;
    }
    return number;
}

int main() {

   char src[] = "1234";

    printf("%d\n", vc_atoi(src));

    return 0;
}