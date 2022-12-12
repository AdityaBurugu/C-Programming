#include <math.h>
#include <stdio.h>
int main()
{
	//Initializing Variables
	float Input_Val,Input_Power,Output_Val;
	//Reading a Number and Power 
	printf("Enter a Number: ");
	scanf("%f",&Input_Val);
	printf("Enter the Power: ");
	scanf("%f",&Input_Power);
	//Calculating Power of a Number 
	Output_Val = pow(Input_Val,Input_Power);
	//Displaying Power of a Number
	printf("%f ", Output_Val);
	return 0;
}
