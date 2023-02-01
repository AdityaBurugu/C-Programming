#include <stdio.h>

int main()
{
	int n;
	printf("Enter an Integer:");
	scanf("%d",&n);
	
	if ((n%5 && n%11) == 0)
			printf("%d is divisible by 5 & 11",n);
	
	else 
		printf("%d is not divisible by 5 & 11",n);
	
	return 0;
}
