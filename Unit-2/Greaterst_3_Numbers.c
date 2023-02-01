#include <stdio.h>

int main()
{
	int n1,n2,n3;
	printf("Enter n1 value:");
	scanf("%d",&n1);
	printf("Enter n2 value:");
	scanf("%d",&n2);
	printf("Enter n3 value:");
	scanf("%d",&n3);
	if (n1>n2)
		if (n1>n3)
			printf("%d is greatest among all",n1);
		else
			printf("%d is greatest among all",n3);
			
	else 
		if(n2>n3)
			printf("%d is greatest among all",n2);
		else
			printf("%d is greatest among all",n3);

	return 0;
	
}
