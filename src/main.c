// Kristoffer & Abdulsalam

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/input_gen.h"
#include "../include/sorting.h"

int main(void)
{
    srand(time(NULL));
    int n = 10; // Size of arrays
    unsigned int *ord = ordered(n);
    if (ord == NULL) {
        printf("Not enough memory");
        exit(1);
    }
    unsigned int *rev = reverse(n);
    if (rev == NULL) {
        printf("Not enough memory\n");
     exit(1);
    }
    unsigned int *rand = randomized(n);
    if (rand == NULL) {
        printf("Not enough memory\n");
        exit(1);
    }
    unsigned int *almOrd = almost_ordered(n);
    if (almOrd == NULL) {
        printf("Not enough memory\n");
        exit(1);
    }

    //test to see it works
    printf("Ordered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ord[i], (i < n - 1) ? ", " : "\n\n");
    }
    printf("Reverse:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", rev[i], (i < n - 1) ? ", " : "\n\n");
    }
    printf("Random:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", rand[i], (i < n - 1) ? ", " : "\n\n");
    }
    printf("Almost ordered:\n");
        for (int i = 0; i < n; i++) {
        printf("%d%s", almOrd[i], (i < n - 1) ? ", " : "\n\n");
    }

    // Test sorting
    int count = 0;
    bubbleSort(ord, n, &count);

    count = 0;
    bubbleSort(rev, n, &count);

    count = 0;
    bubbleSort(rand, n, &count);

    count = 0;
    bubbleSort(almOrd, n, &count);

    printf("Sorted ordered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ord[i], (i < n - 1) ? ", " : "\n\n");
    }
    printf("Sorted reverse:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", rev[i], (i < n - 1) ? ", " : "\n\n");
    }
    printf("Sorted random:\n");
    for (int i = 0; i < n; i++) {
        printf("%d%s", rand[i], (i < n - 1) ? ", " : "\n\n");
    }
    printf("Sorted almost ordered:\n");
        for (int i = 0; i < n; i++) {
        printf("%d%s", almOrd[i], (i < n - 1) ? ", " : "\n\n");
    }
}
