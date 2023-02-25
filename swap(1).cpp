/*


-------------------------------------------

LECT TASK

que  : count whitespaces from string 

input : I have 15 Apples
o/p : no. of whitespaces : 3 

----------------------------------------------------
---------------------------------------------------
HW 

que 1 : count digits from string 

input : I have 15 Apples
o/p : no. of digits : 2 

----------------------------------------------------

que 2 : count aplhabets from string 

----------------------------------------------------

que 3 : count capital & small letters & digits from string 

----------------------------------------------------

que 4 : count Vowel and Consonants from string 

--------------------------------------------------------------------------------------------

que 5: count number of white spaces , number of digits and number of vowe, consonants and digits from the string

ex :  Hello All I Have 18 Books and 2 pens

No of white spaces : 8
No of digits : 3
No of vowels : 10
Consonants : ans



*/





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
	
	
	printf("\n\nNo. of white spaces : %d ",count);
	
	return 0;
}










