//string
//string terminate with null character '\0'
//char str_name[size];
//char str1[]={'a', 'b',  'c' ,'\0'};
////char str[] ="hello dev";
//gets() : to scanf the string
//puts() : to print the string 
//
//#include<stdio.h>
//int main(){
//	char str1[]="hello";
//	printf("\n %s",str1);
//	return 0;
//	
//}

#include<stdio.h>
int main(){
	char str1[10];
	printf("Enter your name :");
	gets(str1);
	printf("your name :");
	puts(str1);
	return 0;
	
}
