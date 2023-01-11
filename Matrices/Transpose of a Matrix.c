#include<stdio.h>
#include<conio.h>
int main()
{
	int r1, c1, i, j;
	int A[10][10], Transpose[10][10];

    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &r1);
  
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &c1);
  
    if(r1==c1)
	{
    	printf("Enter the values of elements of matrix A\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("Enter %d row %d column element: ",i+1,j+1);
				scanf("%d",&A[i][j]);
			}
		}
		
		printf("The Matrix A is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				Transpose[i][j]=A[j][i];
			}
		}
		printf("The Transpose of matrix A is\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",Transpose[i][j]);
			}
			printf("\n");
		}	
	}
	
	else
	{
		printf("Please Enter Row and Column of same Order");
	}
    
	return 0;
}
