#include <stdio.h>

int main()
{
	int n1,n2;
	printf("Enter n1 value:");
	scanf("%d",&n1);
	printf("Enter n2 value:");
	scanf("%d",&n2);
	if (n1>n2)
		printf("%d is greater than %d",n1,n2);
	else
		printf("%d is greater than %d",n2,n1);

	return 0;
	
}
