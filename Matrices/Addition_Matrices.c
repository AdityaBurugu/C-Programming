#include <stdio.h>

int main()
{
	int i,j,r1,c1,r2,c2,a[10][10],b[10][10],R[10][10];
	printf("Enter the number of rows of first matrix: ");
	scanf("%d",&r1);
	printf("Enter the number of columns of first matrix: ");
	scanf("%d",&c1);
	printf("Enter the number of rows of second matrix: ");
	scanf("%d",&r2);
	printf("Enter the number of columns of second matrix: ");
	scanf("%d",&c2);
	
	if (r1==r2 && c1 == c2)
	{
		printf("Enter First matrix elements \n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				printf("Enter %d row %d column element: ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("Printing first matrix elements\n");
		
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				printf("%d row %d column element: %d",i+1,j+1,a[i][j]);
				printf("\n");
			}
		}
		printf("Enter Second matrix elements \n");

		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("Enter %d row %d column element: ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("Printing Second matrix elements\n");

		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("%d row %d column element: %d",i+1,j+1,b[i][j]);
				printf("\n");
			}
		}
		
		printf("Printing Sum of first and second matrices\n");
		
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				R[i][j] = a[i][j] + b[i][j];
			}
		}
		
		
		for ( i = 0 ; i < r1 ; i++ )
    	{
	      	for ( j = 0 ; j < c1 ; j++ )
	      	{
				printf("%d \t", R[i][j]);
			}	
      	printf("\n");
    	}
	}
	else
	{
		printf("Addition of matrices not poissible");
	}
}
