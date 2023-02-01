#include <stdio.h>

int main()
{
	int n;
	printf("Enter Integer: ");
	scanf("%d",&n);
	
	if (n>0)
		printf("%d is positive integer",n);\
			
	else if (n==0)
		printf("%d is zero integer",n);
		
	else 
		printf("%d is negative integer",n);

	return 0;
}
