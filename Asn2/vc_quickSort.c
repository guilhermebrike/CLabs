/**
 * File              : vc_quickSort.c
 * Author            : Ayana, Gui
 * Date              : Wed 6 Feb 2019
 * The code is a little Buggy
 */

void vc_swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

int partition (int *arr, int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    vc_swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 


void quickSort(int *arr, int low, int high) 
{ 
    if (low < high) 
    { 

        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void vc_sort_int_table(int *tab, int size){
    quickSort(*tab,0,size);
}


