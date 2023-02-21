#include<stdio.h>

int main()
{
//	int a = 12;
//	int b = 34;
//	int c;
//	
//	c = a;
//	a = b;
//	b=c;
//	
//	printf("A = %d B = %d",a ,b);

	int a = 12;
	int b = 34;
	
	a = a + b;   // a =  12 + 34 =46
	b = a - b;   // b =  46 - 34 =12
	a = a - b;   // a =  46 - 12 =34
	printf("A = %d B = %d",a ,b);		
}
