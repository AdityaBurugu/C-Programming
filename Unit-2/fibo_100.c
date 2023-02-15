#include<stdio.h>

int main()
{
	int i=0,j=1,k=i+j,r;
	printf("Enter Limit: ");
	scanf("%d",&r);
	printf("Fibonacci Series fron 0 to %d: \n",r);
	printf("%d %d %d ",i,j,k);
	
	while (1)
	{
	    i=j;
	    j=k;
	    k = i + j;
	    if(k > r)
	        break;
	    else if(k >= 0)
	        	printf("%d ",k);
	}

	
	return 0;
}
