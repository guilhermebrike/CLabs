#include <stdio.h>
#include <string.h>



int vc_strlen(char *str) {

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

unsigned int *vc_strlcpy(char *dest, char *src, unsigned int size){
    int dest_size = vc_strlen(dest);
    int src_size = vc_strlen(src);

    int i = 0;
    while (dest[i] != '\0'){
        dest[i] = '\0';
        i++;
    }
    for(i = 0; i < size -1; i++){
        dest[i] = src[i];
    }
    return src_size;
}


int main() {
    // when creating a char array using the [] notation it will convert to a normal char * with \0 at the end
    
    //dst
    char str1[] = "1234\0         ";
    //src
    char str2[] = "hello";

    //dst
    char str3[] = "1234\0         ";
    //src
    char str4[] = "hello";

    // the size n parameter is that notting will be writen after dest+size-1
    printf("%s\n","UNIX");
    printf("%d",strlcpy(str1,str2,10));
    putchar('\n');
    printf("%s",str1);
    putchar('\n');
    printf("%s\n","MINE");
    printf("%d",vc_strlcpy(str3,str4,10));
    putchar('\n');
    printf("%s",str3);
    putchar('\n');

    // printf("%d\n", vc_strlen(str2));
    // printf("%d\n", vc_strlen(str3));
    // printf("%d\n", vc_strlen(vc_strcat(str2,str3)));

    // printf("%s\n",strlcat(str2,str3,5));
   // printf("Addresses pointed by str2: %p",str2[0]);
   // putchar('\n');  
   // printf("Addresses pointed by str2: %p",str2[3]);    



    //char str1[] = "Salut les aninches c'est cool show non on fait de tructerrible\x00\x2e\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";
    //putchar('|');
    //vc_print_memory(str2,3);
    return 0;
}