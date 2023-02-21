//Count capital,small letters and digits from string
#include<stdio.h>

int main()
{
	char str[100];
	int count1 = 0,count2 = 0,count3 = 0,i;
	
	printf("Enter string : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&& str[i]<='9')
		{
			count1++;
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&& str[i]<='z')
		{
			count2++;
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		{
			count3++;
		}
	}
	printf("Digits letters : %d\n",count1);
	printf("Small letters : %d\n",count2);
	printf("Capital latters : %d\n",count3);
	return 0;
}
