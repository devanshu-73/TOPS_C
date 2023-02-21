#include <stdio.h>

void main() {
    // number pattern

    for (int i=1; i<=5; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    char alpha[5] = {'A', 'B', 'C', 'D', 'E'};

    for (int i=0; i<5; i++) {
        for (int j=0; j<=i; j++) {
            printf("%c ", alpha[j]);
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    
    for (int i=0; i<5; i++) {
        for (int j=0; j<=i; j++) {
            printf("%c ", alpha[i-j]);
        }
        printf("\n");
    }
    
    printf("\n\n\n");
    
    for (int i=0; i<5; i++) {
        for (int j=i; j<5; j++) {
            printf("%c ", alpha[j]);
        }
        printf("\n");
    }
}