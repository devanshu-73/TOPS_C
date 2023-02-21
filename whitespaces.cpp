#include<stdio.h>
int main()
{
	int i,space=0;
	char str1[20];
	printf("Enter your name :");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if (str1[i] == ' ')
		{
			space = space +1;
		}
	}
	printf("space : %d",space);
	return 0;
	
}
