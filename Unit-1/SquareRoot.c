#include <math.h>
#include <stdio.h>
int main()
{
	//Initializing Variables
	float Input_Val,Output_Val;
	//Reading Perfect Square Number
	printf("Enter Perfect Square: ");
	scanf("%f",&Input_Val);
	//Calculating Square Root 
	Output_Val = sqrt(Input_Val);
	//Displaying Square Root
	printf("%f ", Output_Val);
	return 0;
}

