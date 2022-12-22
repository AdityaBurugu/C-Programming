# include <stdio.h>
 
int main()
{
	int x;
	printf("Enter Integer: ");
	scanf("%d",&x);
	
	printf("The Hexa Decimal value of %d is 0x%x",x,x);


	printf("\nEnter Hexa Decimal Value: ");
	scanf("%x",&x);
	
	printf("The value of 0x%x is %d",x,x);

	return 0;
}
