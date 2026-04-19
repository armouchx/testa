// Kristoffer & Abdulsalam

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


unsigned int* ordered(int n)
{
    srand(time(NULL));
    unsigned int * arr = malloc(sizeof(unsigned int) * n);

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
    srand(time(NULL));
    unsigned int * arr = malloc(sizeof(unsigned int) * n);

    int variance = 11;
    int prev = 0;

    for (int i = n; i >= 0; i--) {
        arr[i] = prev + rand() % variance; // Same as above, but reverse
        prev = arr[i];
    }
    return arr;
}

unsigned int* randomized(int n)
{
    srand(time(NULL));
    unsigned int * arr = malloc(sizeof(unsigned int) * n);

    int variance = 10;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (n * variance); // Random numbers between 0 and n * variance
    }
    return arr;
}

unsigned int* almost_ordered(int n)
{
    srand(time(NULL));
    unsigned int * arr = malloc(sizeof(unsigned int) * n);

    int variance = 11;
    int prev = 0;
    int swaps = n / 100 * 4 / 2;
    printf("swaps = %d\n", swaps);

    for (int i = 0; i < n; i++) {
        arr[i] = prev + rand() % variance; // Randomized so each number will be a random number bigger than the previous, based on variance
        prev = arr[i];
    }

    for (int i = 0; i < swaps; i++) { // swap ≈4% of items
        int i1 = rand() % n;
        printf("i1 = %d, arr[i1] = %d\n", i1, arr[i1]);
        int i2 = rand() % n;
        printf("i2 = %d, arr[i2] = %d\n", i2, arr[i2]);
        printf("swapping %d(%d) with %d(%d)\n", i1, arr[i1], i2, arr[i2]);
        int temp = arr[i1];
        arr[i1] = arr[i2];
        arr[i2] = temp;
    }
    //TODO
    return arr;
}

int main(void) // For testing
{
    int n = 100;
    unsigned int* arr1 = ordered(n);
    unsigned int* arr2 = reverse(n);
    unsigned int* arr3 = randomized(n);
    unsigned int* arr4 = almost_ordered(n);

    puts("Ordered:");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr1[i]);
    }
    puts("Reverse:");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr2[i]);
    }
    puts("Randomized:");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr3[i]);
    }
    puts("Almost ordered:");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr4[i]);
    }
    free(arr1);
    free(arr2);
    free(arr3);
    free(arr4);
}
