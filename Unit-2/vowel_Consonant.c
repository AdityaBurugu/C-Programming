#include <stdio.h>

int main()
{
	char n;
	printf("Enter a character:");
	scanf("%c",&n);
	
	switch(n)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel",n);
			break;
		default:
			printf("%c is a consonant",n);

	}

	return 0;
	
}
