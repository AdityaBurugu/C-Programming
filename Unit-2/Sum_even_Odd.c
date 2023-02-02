#include <stdio.h>

int main()
{
	int n,count=0,t,sume=0,sumo=0,counte=0,counto=0;
	float avge,avgo;
	printf("Enter number of inputs:");
	scanf("%d",&n);
	
	
	//while(count<=n)
	for(count;count<n;count++)
	{
		scanf("%d",&t);	
		if (t%2==0)
		{
			sume=sume+t;
			counte++;
		}
			
		else
		{
			sumo=sumo+t;
			counto++;
		}
		
		if(n==count)
		break;	
		
	}
	printf("Sum of Even = %d",sume);
	printf("\nSum of Odd = %d",sumo);
	avge = (float)sume/counte;
	printf("\nAverage of Even = %f",avge);
	avgo = (float)sumo/counto;
	printf("\nAverage of Odd = %f",avgo);
	return 0;
}
