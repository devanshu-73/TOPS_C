#include <stdio.h>

void main() {
    int numbers[5] = {5,9,6,8,3};
    
    for (int i=0; i<5; i++) {
        // printf("%d ", numbers[i]);
        for (int n=1; n<=10; n++) {
            printf("%d * %d = %d\n", numbers[i], n, numbers[i]*n);
        }
        printf("---------------\n");
    }
}