/**
 * File              : int vc_sort_params.c
 * Author            : Guilherme
 * Date              : Fri 8 Feb 2019
 */

#include <stdio.h>


void test1(char **arr,int size){
    int i;
    for (i = 1; i < size; i++){
        arr++;
        printf("%p\n",arr);
    }
}

void vc_print_params(char **str, int param_n){
    int i;
    for (i = 1; i < param_n; i++){
        printf("%s\n",str[i]);
    }
}

/*
 * Funcion: compare_strings
 * return 0 if the str1 is bigger than str2.
 * return 1 if the str2 is bigger than str1.
 * check if a string is bigger by testing \0.
 */

int compare_strings(char *str1,char *str2, int i){
    if (str1[i] == '\0'){
        return 1;
    }else if (str2[i] == '\0'){
        return 0;
    }
    else if (str1[i] > str2[i]){
        return 0;
    }else if (str1[i] < str2[i]){
        return 1;
    }else{
        return compare_strings(str1,str2,++i);
    }
}


/*
 * Funcion: vc_swap strings (actually swapping the pointers)
 */
void vc_swap(char **s1, char **s2) {
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}



/*
 * Funcion: Sort String array, so it is actually sorting pointers.
 * The parameter is An array of Pointers for Strings char ** arr.
 * Calling Swap with the adress of the pointers.
 * 
 */
void vc_sort_string_array(char **arr, int size) {
    for(int i = 1; i < size; i++){
        for (int j = i+1; j < size; j++) {
            if (compare_strings(arr[i],arr[j],0) == 0){
                    vc_swap(&arr[i],&arr[j]);
            }
        }
    
    }
}

void vc_sort_params(char **argv,int size){
    vc_sort_string_array(argv,size);
    vc_print_params(argv,size);
}

int main(int argc, char **argv){
    vc_sort_params(argv,argc);
    return 0;
}