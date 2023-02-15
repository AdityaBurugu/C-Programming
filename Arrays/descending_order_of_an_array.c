#include <stdio.h>
 
int main()
{
	int i,j,n=10,a[n],min,max,temp;
	printf("Enter Elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("[");
	for (i=0;i<n;i++)
	{
		if (i != n-1)
		{
			printf("%d,",a[i]);
		}
		else
		{
			printf("%d",a[i]);
		}
	}
	printf("]");
	
}
