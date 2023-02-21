#include<stdio.h>

void main() {
    // 2 dimensional array
    // r - 2
    // c - 3
    int numbers[2][3] = {{1, 2, 3},{11, 12, 13}};

    for (int row=0; row<2; row++) {
        printf("Row %d\n", row);
        for (int column=0; column<3; column++)  {
            // printf("row %d - column %d\n", row, column);
            printf("element %d\n", numbers[row][column]);
        }
    }

    // TASK (multiplication of an array) - arr[2][5] = {{5,4,3,..}, {1,2,3,..}}
}