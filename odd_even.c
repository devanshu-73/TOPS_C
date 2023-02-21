#include <stdio.h>

void main() {
    // check whether a number even or odd

    int a;

    printf("Enter any number to check even or odd: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is an even number.", a);
    } else {
        printf("%d is an odd number.", a);
    }
}