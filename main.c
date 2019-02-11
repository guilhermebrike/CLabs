#include <stdio.h>
#include <string.h>


// transform numbers in hexadecimal
                // while(n!=0) {    
                //     int mod_number  = 0; 
                //     mod_number = n % 16; 
                //     if(mod_number < 10) { 
                //         mod_number = mod_number + 48; 
                //         putchar(mod_number);
                //     }else{ 
                //         mod_number = mod_number + 87; 
                //         putchar(mod_number);
                //         } 
                //     n = n/16; 
                // }


 void *vc_print_memory(void *addr, unsigned int size){
     putchar(addr++);
     putchar(addr++);
     putchar(addr++);
     putchar(addr++);
     putchar(addr++);
     putchar(addr++);
 }

int main() {


    // when creating a char array using the [] notation it will convert to a normal char * with \0 at the end
    
    char *test = "Salut les aninches c'est cool show non on fait de tructerrible\x00\x2e\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";

    vc_print_memory(test,10);


    // the size n parameter is that notting will be writen after dest+size-1


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

// int main(void) {

//     int a;
//     a = 5;
//     printf("The memory address of a is: %p\n", (void*) &a);
//     return 0;
// }