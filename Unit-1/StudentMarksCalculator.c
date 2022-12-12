#include <stdio.h>

int main()
{
	float English,Mathematics,Science,Social,Telugu,Hindi;
	float Total,Average,Percentage;
	printf("Enter English Marks: ");
	scanf("%f",&English);
	printf("Enter Mathematics: ");
	scanf("%f",&Mathematics);
	printf("Enter Science: ");
	scanf("%f",&Science);
	printf("Enter Social: ");
	scanf("%f",&Social);
	printf("Enter Telugu: ");
	scanf("%f",&Telugu);
	printf("Enter Hindi: ");
	scanf("%f",&Hindi);
	
	Total = English+Mathematics+Science+Social+Telugu+Hindi;
	Average = Total/6;
	Percentage = (Total/600)*100;
	printf("Total Marks Obtained = %f",Total);
	printf("\nAverage of Total Marks Obtained = %f",Average);
	printf("\nPercentage of Total Marks Obtained = %.2f Percentage",Percentage);

	return 0;
}
