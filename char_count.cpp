#include<stdio.h>

int main()
{
	
	char str1[20];
	int i,count=0;
	
	printf("Enter Your Name : ");
	gets(str1);
	
	printf("your name : %s\n\n",str1);
	
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' ')
		{
			count+=1;
		}
	}
	
	
	printf("\n\n No. of white spaces : %d ",count);
	
	return 0;
}

