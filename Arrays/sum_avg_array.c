# include <stdio.h>
int  main()
{
	int  a[25], n, i ;
	float  avg = 0, sum = 0 ;
	
	printf("Enter no.of elements: ");
	scanf("%d",&n);
	printf("\nEnter Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("Sum of Elements = %.2f",sum);
	printf("\nAverage of Elements = %.2f",sum/n);
	return 0;
}
