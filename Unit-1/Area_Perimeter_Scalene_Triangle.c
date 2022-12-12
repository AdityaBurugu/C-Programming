#include <stdio.h>
#include <math.h>
int main()
{
	float side1,side2,side3,Perimeter,Area,S;//S=Semi-Perimeter
	printf("Enter Side 1: ");
	scanf("%f",&side1);
	printf("Enter Side 2: ");
	scanf("%f",&side2);
	printf("Enter Side 3: ");
	scanf("%f",&side3);
	S=(side1+side2+side3)/2;
	Perimeter = side1+side2+side3;
	Area= sqrt(S*(S-side1)*(S-side2)*(S-side3));
	
	printf("Perimeter = %f",Perimeter);
	printf("\nArea = %f",Area);
	
	return 0;
}
