#include<stdio.h>

void main() {
    // simple star pattern
    // *
    // **
    // ***
    // ****
    // *****

    for (int i=1; i<=5;i++) {
        // printf("%d ", i);
        for (int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n\n");

    for (int i=1; i<=5; i++) {
        for (int j=1; j<=i; j++) {
            printf(" ");
        }
        for (int j=5; j>=i; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\n\n");

    for (int i=5; i>0; i--) {
        for (int j=1; j<=i; j++) {
            printf(" ");
        }
        for (int j=5; j>=i; j--) {
            printf("*");
        }
        printf("\n");
    }
}