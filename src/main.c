// Kristoffer & Abdulsalam

#include <stdio.h>
#include <stdlib.h>
#include "../include/input_gen.h"
#include "../include/sorting.h"

int main(void)
{
    int n = 10; // Size of arrays
    unsigned int *ord = ordered(n);
    if (ord == NULL) {
        printf("Not enough mennnnnn");
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
        printf("%d\n", ord[i]);
    }
    puts("");
    printf("Reverse:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", rev[i]);
    }
    puts("");
    printf("Random:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", rand[i]);
    }
    puts("");
    printf("Almost ordered:\n");
        for (int i = 0; i < n; i++) {
        printf("%d\n", almOrd[i]);
    }
    puts("");
}
