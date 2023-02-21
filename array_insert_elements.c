#include<stdio.h>

void main() {
    // insert elements in to an array - user input

    int numbers[5];

    for (int i=0; i<5; i++) {
        printf("Insert element for index number %d: ", i);
        scanf("%d", &numbers[i]);
    }
    
    printf("\n\n");
    
    for (int i=0; i<5; i++) {
        printf("Element at index number %d is: %d\n", i, numbers[i]);
    }
}