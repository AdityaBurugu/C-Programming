#include <stdio.h>

int main()
{
	int n;
	printf("Enter a value:");
	scanf("%d",&n);
	printf("%d",n);
	while(n>=0)
	{
		printf("\nEnter a value:");
		scanf("%d",&n);
		if (n<0)
		{
			printf("Loop ends here as you have entered a -ve value: %d",n);
			break;
		}
		else
			printf("%d",n);
	}

	return 0;
	
}
