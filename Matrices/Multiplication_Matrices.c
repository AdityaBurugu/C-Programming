#include<stdio.h>
#include<conio.h>
int main()
{
  int r1, c1, r2, c2, i, j, k, sum=0;
  int a[10][10], b[10][10], R[10][10];

  printf("Enter the number of rows of first matrix: ");
  scanf("%d", &r1);
  
  printf("Enter the number of columns of first matrix: ");
  scanf("%d", &c1);
  
  printf("Enter the number of rows of second matrix: ");
  scanf("%d", &r2);
  
  printf("Enter the number of columns of second matrix: ");
  scanf("%d", &c2);

  if (c1 == r2)
  {
  	printf("Enter the elements of first matrix\n");
  	for (  i = 0 ; i < r1 ; i++ )
	  {
    	for ( j = 0 ; j < c1 ; j++ )
      	{
      	  printf("Enter %d row %d column element: ",i+1,j+1);
		  scanf("%d", &a[i][j]);
		}
	  }
      
    printf("Enter the elements of second matrix\n");

    for ( i = 0 ; i < r2 ; i++ )
      {
		  for ( j = 0 ; j < c2 ; j++ )
	      {
	      	printf("Enter %d row %d column element: ",i+1,j+1);
			scanf("%d", &b[i][j]);
		  }
	  }

    for ( i = 0 ; i < r1 ; i++ )
    {
      for ( j = 0 ; j < c2 ; j++ )
      {
	for ( k = 0 ; k < r2 ; k++ )
	{
	  sum = sum + a[i][k]*b[k][j];
	}

	R[i][j] = sum;
	sum = 0;
      }
    }

    printf("Product of entered matrices:\n");

    for ( i = 0 ; i < r1 ; i++ )
    {
      for ( j = 0 ; j < c2 ; j++ )
      {
		printf("%d \t", R[i][j]);
	}
    printf("\n");
    }
  }
  else
  {
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  }
}
