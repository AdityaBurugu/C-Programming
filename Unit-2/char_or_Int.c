#include <stdio.h>

int main()
{
	char n,ac;
	printf("Enter character or integer:");
	scanf("%c",&n);
	
	ac =  n;
	if ((ac>=65 && ac<=90) || (ac>=97 && ac<=122))
		printf("%c is an alphabet",n);
		
	else if (ac>=48 && ac<=57)
		printf("%c is an integer",n);

	return 0;
	
}
