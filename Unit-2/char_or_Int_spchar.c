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
		
	else if(ac>=33 && ac<=47 || ac>=58 && ac<=64 || ac>=91 && ac<=95 || ac>=123 && ac<=126)
		printf("%c is a special character",n);
	else
		printf("Invalid Input");

	return 0;
	
}
