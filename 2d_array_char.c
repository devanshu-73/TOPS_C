#include<stdio.h>

void main() {
    // 2 dimensional array - char

    char alpha_num[2][3] = {{'1','2','3'}, {'a','b','c'}};

    for (int row=0; row<2; row++) {
        printf("%d: ", row);
        for (int column=0; column<3; column++) {
            printf("%c ", alpha_num[row][column]);
        }
        printf("\n");
    }
}