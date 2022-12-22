# include <stdio.h>
 
int main()
{
	int o;
	printf("Enter Integer: ");
	scanf("%d",&o);
	
	printf("The Octal value of %d is 0%o",o,o);


	printf("\nEnter Octal Value: ");
	scanf("%o",&o);
	
	printf("The value of 0%o is %d",o,o);

	return 0;
}
