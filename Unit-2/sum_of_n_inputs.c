#include <stdio.h>

int main()
{
	int n,count=0,t,sum=0;
	float avg;
	printf("Enter number of inputs:");
	scanf("%d",&n);
	
	
	while(count<=n)
	{
		scanf("%d",&t);	
		sum=sum+t;	
		count++;
		
		if(n==count)
		break;	
		
	}
	printf("Sum = %d",sum);
	avg = (float)sum/n;
	printf("\nAverage = %f",avg);
	return 0;
	
}
