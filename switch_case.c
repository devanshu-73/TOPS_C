#include <stdio.h>

void main() {
    // switch case

    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    switch (a) {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    
    default:
        break;
    }
}