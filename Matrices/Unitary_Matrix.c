#include<stdio.h>

int main()
{
	int r,c,i,j;
	int imatA[10][10];
	
	printf("Enter order of unitary matrix: ");
	scanf("%d %d",&r,&c);
	
	if(r==c)
	{
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if (i==j)
					imatA[i][j]=1;
				else
					imatA[i][j]=0;
			}
		}
		
		printf("The Unitary Matriox of Order %dX%d: \n",r,c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",imatA[i][j]);
			}
			printf("\n");
		}
	}
		
	else 
		printf("Unitary Matrix cannot be generated with the given order");
	return 0;
}
