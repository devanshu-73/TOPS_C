#include<stdio.h>
#include<string.h>

int main()
{
	
	char str1[100],str2[100];
	int i,length=0;
	
	printf("Enter string : ");
	gets(str1);
	
	length=strlen(str1);
	
	for(i=length;i>=0;i--)
	{
		printf("%c",str1[i]);
	}
	
	printf("\nOrignal string : %s",str	1);
	
	return 0;
}
