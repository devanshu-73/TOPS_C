//Count capital,small letters and digits from string
#include<stdio.h>

int main()
{
	char str[100];
	int count1 = 0,count2 = 0,i;
	
	printf("Enter string : ");
	gets(str);
	

	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u')
		{
			count1++;
		}
		else if(str[i]>='a'&& str[i]<='z')
		{
			count2++;
		}
	}
	printf("Vowel : %d\n",count1);
	printf("Consonant : %d\n",count2);
	return 0;
}
