#include <stdio.h>

int main()
{
	float Angle1,Angle2,UnknownAngle;
	printf("Enter Angle 1: ");
	scanf("%f",&Angle1);
	printf("Enter Angle 2: ");
	scanf("%f",&Angle2);
	
	UnknownAngle = 180-(Angle1+Angle2);
	printf("%f",UnknownAngle);
	return 0;
}
