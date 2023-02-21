#include<stdio.h>

void main() {
    // relational operators -> always returns boolean values as 0 and 1, 0 is false and 1 is true
    // ==, !=, >, <, >=, <=

    int a = 5;
    int b = 6;

    printf("%d == %d -> %d\n\n", a, b, a == b);

    printf("%d == %d -> %d\n", b, a, b == a);
    
    printf("%d !=%d -> %d\n",a, b, a != b);
    
    printf("%d > %d-> %d\n", a, b, a > b);

    printf("%d > %d-> %d\n", b, a, b > a);
    
    printf("%d < %d-> %d\n", a, b, a < b);

    printf("%d < %d-> %d\n", b, a, b < a);

    printf("%d >= %d-> %d\n", a, b, a >= b);
    printf("%d >= %d-> %d\n", b, a, b >= a);
    
    printf("%d <= %d-> %d\n", a, b, a <= b);
    printf("%d <= %d-> %d\n", b, a, b <= a);
}