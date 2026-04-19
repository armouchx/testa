// Kristoffer & Abdulsalam

#include "../include/sorting.h"

void bubbleSort(unsigned int arr[], int n, int *op)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            *op += 1;
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// #include <stdio.h>
// int main(void) // To test that it works
// {
//     unsigned int arr1[] = {6,3,9,10,1,3};
//     unsigned int arr2[] = {1,3,9,10,11,13};
//     unsigned int arr3[] = {13,11,10,9,3,1};
//     int n = 6;
//     int op = 0;

//     bubbleSort(arr1, n, &op);
//     printf("number of operations: %d\n", op);
//     printf("sorted numbers:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\n", arr1[i]);
//     }
//     puts("");

//     op = 0;
//     bubbleSort(arr2, n, &op);
//     printf("number of operations: %d\n", op);
//     printf("sorted numbers:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\n", arr2[i]);
//     }
//     puts("");

//     op = 0;
//     bubbleSort(arr3, n, &op);
//     printf("number of operations: %d\n", op);
//     printf("sorted numbers:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\n", arr3[i]);
//     }
// }
