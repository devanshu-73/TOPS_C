//With Return type with parameter

#include<stdio.h>

float div(float a, float b);

int main()
{
	float a,b;
	
	printf("Enter value of a and b : ");
	scanf("%f %f",&a,&b);
	
	printf("Division : %.2f",div(a,b));
	
	return 0;
}

float div(float a, float b)
{
	return a/b;
}
