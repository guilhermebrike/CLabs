#include<stdio.h>


int sum_arr(int *arr, int size){
 int total = 0;
 for (int i = 0; i < size; i++){
     total += arr[i];
 }
 return total;
}

int sum_arr2(int *arr, int size){
 int total = 0;
 while (size-- > 0){
     total += *arr++;
 }
 return total;
}



int main(int argc, char **argv)
{
    int a[] = {1,2,3,4,5};
    
    printf("%d\n",sum_arr2(a,5));
    

    return 0;
}