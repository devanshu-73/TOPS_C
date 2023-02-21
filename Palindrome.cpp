// String is palindrome or not?
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i,l,flag = 0;

    printf("Enter a String : ");
    gets(str);
    l = strlen(str);
    for(i= 0;i<l;i++)
    {
        if (str[i] != str[l-1-i])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("String is palindrome ....");
    }
    else{
        printf("String is not palindrome...");
    }
    return 0;
}