#include <stdio.h>
 
int main()
{
	int i,n=5,a[5],min,max;
	printf("Enter Elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for (i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		else if (min>a[i])
		{
			min=a[i];
		}
	}
	printf("Max = %d, Min = %d",max,min);
}

