#include <stdio.h>
#include <string.h>
int main()
{
    char s[50],temp;
    int i,l;

    printf("Enter a String : ");
    gets(s);
    l = strlen(s);
    for(i= 0;i<l/2;i++)
    {
        temp = s[i];
        s[i] = s[l-1-i];
        s[l-i-1] = temp;
    }
    printf("Reverse String : %s ", s);
    return 0;
}