#include<stdio.h>
#include<string.h>

int main()
{
	
	char str1[100],str2[100],length=0;
	
	printf("Enter string : ");
	gets(str1);
	
	printf("Enter string : ");
	gets(str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("\nBoth are same");
	}
	else{
		printf("Not same strings");
	}
	
	return 0;
}
