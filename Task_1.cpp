#include <stdio.h>

float circle();
float rectangle();
float triangle();
int main()
{

    int choice;
    float b, h, r, l, br;

    printf("\n**Area Calculator**\n");
    printf("Enter 1 to find area of circle \n");
    printf("Enter 2 to find area of rectangle \n");
    printf("Enter 3 to find area of Triangle \n");

    printf("enter your choice :");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
    {
    	printf("Area of circle is %.2f = ",circle());
    	
        break;
    }

    case 2:
    {
    	printf("Area of  is rectangle  = %.2f  ",rectangle());
        
        break;
    }

    case 3:
    {
		printf("Area of  is triangle  = %.2f  ",triangle());
        
        break;
    }

    case 4:
    {

        printf("invalid choice :");
        break;
    }
    }
    return 0;
}

float circle()
{
		float r;
		printf("Enter radius of circle : ");
        scanf("%f", &r);
        float area;
        area =  3.141 * r * r;
        
        return area;

}
float rectangle()
{
	float l,b;
	printf("\nEnter length  of rectangle :");
	scanf("%f", &l);
	printf("\nEnter breadth of of rectangle :");
	scanf("%f", &b);
	float area;
	area = l*b;
	return area;
}
float triangle()
{
	float br,h;
	printf("Enter base of triangle :");
        scanf("%f", &br);
        printf("Enter height of triangle :");
        scanf("%f", &h);
        	float area;
	area = (br * h) / 2;
        
	return area;
}
