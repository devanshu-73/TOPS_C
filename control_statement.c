#include<stdio.h>

void main() {
    // control statements - break and continue

    printf("1. print after break condition:: ");
    for (int i=1; i<=10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }

    printf("\n\n2. print before break condition:: ");
    for (int i=1; i<=10; i++) {
        printf("%d ", i);
        if (i == 5) {
            break;
        }
    }
    
    printf("\n\n1. print after continue condition:: ");
    for (int i=1; i<=10; i++) {
        if (i == 5) {
            printf("skipped ");
            continue;
        }
        printf("%d ", i);
    }
    
    printf("\n\n1. print before continue condition:: ");
    for (int i=1; i<=10; i++) {
        printf("%d ", i);
        if (i == 5) {
            continue;
        }
    }
}

// YOUR TASK: PRINT ALL EVEN NUMBERS USING CONTINUE STATAMENT