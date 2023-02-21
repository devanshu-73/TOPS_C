#include <stdio.h>

void main() {
    // logical operators
    // AND - &&, OR - ||, NOT - !
    // ! is equalant of !
    // (!a == b), (a != b)

    int a;
    int range1 = 20;
    int range2 = 40;
    int range3 = 60;

    printf("enter any number between 1-60: ");
    scanf("%d", &a);

    if (a > 0 && a < range1) {
        printf("%d is in range of 1-%d", a, range1);
    } else if (a > range1 && a < range2) {
        printf("%d is in range of %d-%d", a, range1, range2);
    } else if (a > range2 && a < range3) {
        printf("%d is in range of %d-%d", a, range2, range3);
    }
}