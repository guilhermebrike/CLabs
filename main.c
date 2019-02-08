#include <stdio.h>

int vc_str_is_printable(char *str){
    int i = 0;
    
    if (str[i] == '\0'){
        return 1;
    }

    while (str[i] != '\0'){
            if (str[i] >= 33 && str[i] <= 126){
                i++;
                continue;
            }else{
                return 0;
            }
           i++;        
    }
    return 1;
}

int main() {
    // when creating a char array using the [] notation it will convert to a normal char * with \0 at the end
    char str1[] = "helloyouarethebest";
    char str2[] = "812398cxjia81238z09[';]-!@#$!^#";

    printf("%d\n", vc_str_is_printable(str2));
    return 0;
}