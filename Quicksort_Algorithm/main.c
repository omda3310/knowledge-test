#include <stdio.h>
#include "main.h"

void swap_integers(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


int partition(int array[], int start_index, int end_index)
{
    int val = array[start_index], i = start_index, j = end_index;
    while (i < j)
    {
        while (array[j] > val)
        {
            j--;
        }
       
        while (array[i] <= val)
        {
            i++;
        }
        if(i < j) 
            swap_integers(&array[i],&array[j]);
    }
    swap_integers(&array[start_index],&array[j]);
    return j;
}

void quickSort(int array[], int start_index, int end_index)
{
    if (start_index < end_index)
    {
        int middle = partition(array, start_index, end_index);

        quickSort(array, start_index, middle - 1);
        quickSort(array, middle + 1, end_index);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
