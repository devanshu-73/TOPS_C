#include<stdio.h>
int main()
{
	int i,length =0 ;
	char str1[20];
	printf("Enter your name :");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		length = length +1;
	}
	printf("length : %d",length);
	return 0;
	
}
