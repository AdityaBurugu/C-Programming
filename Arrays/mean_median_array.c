# include <stdio.h>
int  main()
{
	int  a[25], n, i;
	float mean = 0,median = 0 ;
	
	printf("Enter no.of elements: ");
	scanf("%d",&n);
	printf("\nEnter Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mean+=a[i];
	}
	mean/=n;
	printf("Mean of Elements = %.2f",mean);
	if(n%2==0){
		median = (a[n/2]+a[n/2-1])/2.00;
	}
	else 
		median=a[n/2];
	printf("\nMedian of Elements = %.2f",median);
	return 0;
}
