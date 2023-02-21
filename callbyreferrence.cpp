//call bye referrence
#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp =*p;
	*p = *q;
	*q = temp;
	
}

int main()
{
	int a,b;
	printf("enter two number :");
	scanf("%d %d",&a,&b);
	
	printf("Before swap a = %d , b = %d",a,b);
	
	swap(&a,&b);
	printf("after swap a = %d , b = %d",a,b);
	return 0;
}
