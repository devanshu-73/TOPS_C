#include <stdio.h>

void main() {
    // loops - iterate/traverse the sequence
    // for, while and do..while

    // for loop - for(declaration iteration_var = 0; condition; increment/decrement) {}
    // print 0-9

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }

    printf("\n\n");
    // print 9 - 0
    for (int i = 9; i >= 0; i--) {
        printf("%d ", i);
    }

    printf("\n\n");
    // while loop

    int i = 10;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n\n");

    // do .. while

    int j = 10;
    do {
        printf("%d ", j);
        j++;
    } while (j < 10);

    // task hint - "%d x %d = %d", 5, i, 5*i
}