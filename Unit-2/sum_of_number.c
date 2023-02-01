# include <stdio.h>

int main()
{
	int digit,n,sum=0,temp;
	
	printf("Enter n value: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		digit=n%10;
		sum=sum+(digit);
		n=n/10;
	}
	printf("Sum of digits in %d is : %d\n",temp,sum);
	return 0;
}
