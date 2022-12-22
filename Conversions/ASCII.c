# include <stdio.h>
 
int main()
{
	char c;
	printf("Enter Character/Number: ");
	scanf("%c",&c);
	
	printf("The ASCII value of %c is %d",c,c);
	
	printf("\nEnter ASCII Value: ");
	scanf("%d",&c);
	
	printf("The Character of %d is %c",c,c);
	
	return 0;
}
