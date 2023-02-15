#include <stdio.h>

int main()
{
	int n;
	while(n>=0)
	{
		printf("Enter a value:");
		scanf("%d",&n);
		if (n<0)
		{
			printf("Loop ends here as you have entered a -ve value: %d",n);
			break;
		}
		else
			printf("%d\n",n);
	}

	return 0;
	
}
