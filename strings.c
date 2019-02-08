#include<stdio.h>

int main(int argc, char **argv)
{
    char *str1 = "Hello";
    char str2[]  = "Hello";
    
    const char *mutablePointerToImmutableContent1 = {'a','b','c','\0'};

    char const *mutablePointerToImmutableContent1 = {'a','b','c','\0'};

    char * const immutablePointerToMutableContent = {'a','b','\0'};
    
    *immutablePointerToMutableContent = 'c'; // this will work, as the array will be {'c','b','\0'};

    const char * const immutablePointerToImmutableContent = {'a','b', '\0'};


    printf("s\n",str1);
    printf("s\n",str2);

    // string literal -> data segment (optimization)
    //automatically read-only (immutable)

    // strcpy
    char src[] = "Hello";
    char dest[6];
    strpy(dest,src);
    printf("dest: %s\n",dest);

    strncpy(dest,src,sizeof(char)* 1);
    printf("dest: %s\n",dest);

    return 0;
}