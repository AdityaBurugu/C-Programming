#include <stdio.h>
#include <math.h>
int main()
{
	float length,breadth,radius,Perimeter,Area;
	printf("Enter Length: ");
	scanf("%f",&length);
	printf("Enter Breadth: ");
	scanf("%f",&breadth);
	printf("Enter Radius: ");
	scanf("%f",&radius);
	
	Perimeter = 2*(length+breadth);
	Area = length*breadth;
	printf("Perimeter of Rectangle = %f",Perimeter);
	printf("\nArea of Rectangle = %f",Area);
	
	Perimeter = (2*22*radius)/7;
	Area= (22*radius*radius)/7;
	
	printf("\nPerimeter of Circle = %f",Perimeter);
	printf("\nArea of Circle = %f",Area);
	
	return 0;
}
