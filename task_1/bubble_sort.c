// Kristoffer & Abdulsalam

#include <stdio.h>

// Bubble sort
// Sorts a given array by bubble sort
// Input: An array A[0..n − 1] of orderable elements
// Output: Array A[0..n − 1] sorted in nondecreasing order
//
// BubbleSort(A[0..n − 1])
//     for i ← 0 to n − 2 do
//         for j ← 0 to n − 2 − i do
//             if A[j + 1] < A[j] swap A[j] and A[j + 1]
void bubbleSort(unsigned int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) // To test that it works
{
    unsigned int arr[] = {6,3,9,10,1,3};
    int n = 6;

    bubbleSort(arr, n);
    printf("sorted numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
