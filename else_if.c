#include<stdio.h>

void main() {
    int a;

    printf("enter any number between 1-20: ");
    scanf("%d", &a);

    if (a <= 20) {
        printf("%d is less than %d", a, 20);
    } else if (a <= 10) {
        printf("%d is less than to %d", a, 10);
    } else if (a <= 5) {
        printf("%d is less than to %d", a, 5);
    } else {
        printf("wrong input");
    }
}