# include<stdio.h>
 
int main()
{
	float icm,om,okm;
	printf("Enter the centimeter value: ");
	scanf("%f",&icm);
	om = icm/100;
	okm=icm/100000;
	printf("Cm-Meters: %f m",om);
	printf("\nCm-KM: %f km",okm);
	return 0;
	
}
