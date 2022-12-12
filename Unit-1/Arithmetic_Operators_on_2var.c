#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter b value: ");
	scanf("%d",&b);

	printf("Sum of %d,%d = %d",a,b,a+b);
	printf("\nDifference between %d,%d = %d",a,b,a-b);
	printf("\nProduct of %d,%d = %d",a,b,a*b);
	printf("\nDivision of %d,%d = %d",a,b,a/b);
	printf("\nRemainder of %d,%d = %d",a,b,a%b);

	return 0;
}
