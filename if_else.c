#include<stdio.h>

void main() {
    // conditional statements

    // if , else, else if, nested if (else if ladder)

    int a;
    int b;

    printf("enter value for a: ");
    scanf("%d", &a);
    
    printf("enter value for b: ");
    scanf("%d", &b);

    // if (a == b) {
    //     printf("%d is equals to %d", a, b);
    // }
    
    // if (a == b) {
    //     printf("%d is equals to %d", a, b);
    // } else {
    //     printf("%d is not equals to %d", a, b);
    // }
    
    if (a != b) {
        printf("%d is not equals to %d", a, b);
    } else {
        printf("%d is equals to %d", a, b);
    }
}