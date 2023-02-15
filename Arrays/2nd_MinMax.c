#include <stdio.h>
 
int main()
{
	int i,j,n,a[10],min,max,temp;
	printf("Enter no.of Elements: ");
	scanf("%d",&n);
	printf("Enter Elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nMax = %d,Min = %d",a[n-2],a[1]);
}
