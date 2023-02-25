/*Function : 

	Function is a block of code that codes are used againa and again in aprogram
	
	>>Why we need to use Fucntions ?
	
	-line of code reduce
	-code reusability
	-can give structure to your program 
	
	>>How to declare a function : 
	
	Syntax  : ruturn_type function_name(parameter/argument);
	
	>>Types Of Function in C: 
	
	1. User defined Functions : we need to create logic for such fucntion
	Ex: my_func(),car(),etc...
	
	2. Inbuilt Functions : are pre defined in the system
	Ex: printf(),scanf(),clrscr(),main(),gets(),.....etc...
	
	>>Categories of Function : 
	
	1. w/o return type and w/o parameter
	2. w/o return type and with parameter
	3. with return type and w/o parameter
	4. with return type and with parameter
*/

//1. Fuction w/o return type and with parameter

#include<stdio.h>

//Funciton Declaration
void add(int a, int b);

int main()
{
	int a,b; 
	
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
	//Funciton Calling 
	add(a,b);
	
	return 0;
}

//Funciton Defination
void add(int a, int b) //here a and b are formal parameter
{
	printf("\nAddition of %d and %d is : %d",a,b,a+b);
}
























