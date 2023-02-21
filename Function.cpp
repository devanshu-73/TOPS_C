//Function :  
//   function is a block of code that codes are used again and again in program
//   
//   why we need to use functions
//   
//   -line of code reduce
//   -code reusability
//   -can give structure to your program
//   
//   how to declare a function:
//   	
//   	syntax : return_type function_name(parameter,argument)
//   	
//   	
//   	>>types of function in c:
//   		1 - user defined functions : we need to create logic  for such function
//   		ex : name(),car();
//   		
//   		2 - inbuilt funtions : are pre defined in the system 
//		   ex : printf(),scanf();
//		   
//		   categories of funs:
//		   	
//		   	1 - w/o return type w/o parameter
//		   	2 - w/o return type with parameter
//		   	3 - with return type w/o parameter
//		   	4 - with return type with parameter
//		   	
//		1 >>>   function	- w/o return type w/o parameter

#include<stdio.h>

void my_func();

int main()
{
	printf("main funs\n");
	
	my_func();
	return 0;
}

void my_func ()
{
	printf("my funs");
}
