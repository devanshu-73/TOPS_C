#include<stdio.h>

void main() {
    // char array
    char a = 'a';

    // multiple chars in a single variable
    char name[5] = {'k', 'e', 'v', 'a', 'l'};

    printf("%c\n\n", name[0]);
    printf("%c\n\n", name[1]);
    printf("%c\n\n", name[2]);
    printf("%c\n\n", name[3]);
    printf("%c\n\n", name[4]);

    // multiple chars using double quote - string
    char city[10] = "ahmedabad";

    printf("%c ", city[0]);
    printf("%c ", city[1]);
    printf("%c ", city[2]);
    printf("%c ", city[3]);
    printf("%c ", city[4]);
    printf("%c ", city[5]);
    printf("%c ", city[6]);
    printf("%c ", city[7]);
    printf("%c\n\n", city[8]);

    // print char array as string
    printf("%s\n\n", name);
    printf("%s\n\n", city);

    // limit-less array
    int marks[] = {7,8,9,6,5,4,4,2,3,6,5,1,4,5,6,9};

    printf("%d\n\n", marks[10]);

    char address[] = "maninagar, ahmedabad, gujarat, india, asia";

    printf("%s", address);
}