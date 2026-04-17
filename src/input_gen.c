// Kristoffer & Abdulsalam

#include <stdlib.h>
#include <stdio.h>

unsigned int* ordered(int n)
{
    //TODO: make it more interesting, not just a linear list of nums
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // As basic as can be, output will be [1,2,3,...,n]
    }
    return arr;
}

unsigned int* reverse(int n)
{
    //TODO: make it more interesting, not just a linear list of nums
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = n - i; // As basic as can be, output will be [n,n-1,n-2,...,3,2,1]
    }
    return arr;
}

unsigned int* randomized(int n)
{
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    //TODO
    return arr;
}

unsigned int* almost_ordered(int n)
{
    unsigned int * arr = malloc(sizeof(unsigned int) * n);
    //TODO
    return arr;
}

int main(void) // For testing
{
    int n = 5;
    unsigned int* arr1 = ordered(n);
    unsigned int* arr2 = reverse(n);

    puts("Ordered:");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr1[i]);
    }
    puts("Reverse:");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr2[i]);
    }
    free(arr1);
    free(arr2);
}
