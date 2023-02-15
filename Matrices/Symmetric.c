#include<stdio.h>

int main()
{
	int r,c,i,j;
	int imatA[10][10];
	int flag=0;
	
	printf("Enter order of matrix: ");
	scanf("%d %d",&r,&c);
	
	if(r==c)
	{
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("Enter %d row %d column element: ",i+1,j+1);
				scanf("%d",&imatA[i][j]);
			}
		}
		
		printf("The Matriox of Order %dX%d: \n",r,c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",imatA[i][j]);
			}
			printf("\n");
		}
		
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(imatA[i][j]==imatA[j][i])
					flag=1;
				else 
					flag=0;
					break;
			}
		}
		
		if(flag==1)
			printf("The Entered Matrix is Symmetric");
			
		else
			printf("The Entered Matrix is not Symmetric");
	}
		
	else 
		printf("Unitary Matrix cannot be generated with the given order");
	return 0;
}
