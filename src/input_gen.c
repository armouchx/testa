// Kristoffer & Abdulsalam

#include <stdlib.h>
#include <time.h>

#include "../include/input_gen.h"

unsigned int* ordered(int n)
{
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    if (arr == NULL) {
        return NULL;
    }

    int variance = 11;
    int prev = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = prev + rand() % variance; // Randomized so each number will be a random number bigger than the previous, based on variance
        prev = arr[i];
    }
    return arr;
}

unsigned int* reverse(int n)
{
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    if (arr == NULL) {
        return NULL;
    }

    int variance = 11;
    int prev = 0;

    for (int i = n - 1; i >= 0; i--) {
        arr[i] = prev + rand() % variance; // Same as above, but reverse
        prev = arr[i];
    }
    return arr;
}

unsigned int* randomized(int n)
{
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    if (arr == NULL) {
        return NULL;
    }

    int variance = 10;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (n * variance); // Random numbers between 0 and n * variance
    }
    return arr;
}

unsigned int* almost_ordered(int n)
{
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    if (arr == NULL) {
        return NULL;
    }

    int variance = 11;
    int prev = 0;
    int swaps = n / 100 * 4 / 2;
    if (swaps == 0) swaps = 1;

    for (int i = 0; i < n; i++) {
        arr[i] = prev + rand() % variance; // Randomized so each number will be a random number bigger than the previous, based on variance
        prev = arr[i];
    }

    for (int i = 0; i < swaps; i++) { // swap ≈4% of items. TODO: Guard against unlikely, but possible scenario where the same items get swapped twice, resulting in no change.
        int i1 = rand() % n;
        int i2;
        do {
            i2 = rand() % n;
        } while (i2 == i1);
        int temp = arr[i1];
        arr[i1] = arr[i2];
        arr[i2] = temp;
    }
    return arr;
}

// #include <stdio.h>
// int main(void) // For testing
// {
    // int n = 100;
    // unsigned int* arr1 = ordered(n);
    // unsigned int* arr2 = reverse(n);
    // unsigned int* arr3 = randomized(n);
    // unsigned int* arr4 = almost_ordered(n);

    // puts("Ordered:");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", arr1[i]);
    // }
    // puts("Reverse:");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", arr2[i]);
    // }
    // puts("Randomized:");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", arr3[i]);
    // }
    // puts("Almost ordered:");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", arr4[i]);
    // }
    // free(arr1);
    // free(arr2);
    // free(arr3);
    // free(arr4);
// }
