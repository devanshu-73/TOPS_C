//Count digits from string
#include<stdio.h>

int main()
{
	char str[100];
	int count = 0,i;
	
	printf("Enter string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&& str[i]<='9')
		{
			count++;
		}
	}
	printf("Count : %d",count);
	return 0;
}
