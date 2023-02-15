#include<stdio.h>
#include<conio.h>
int main()
{

int iRowSize;
int iColSize;
int iTransRowSize;
int iTransColSize;
int iMatA[10][10];
int iMatTransA[10][10];
int iTempdata;

int iRowIndex;
int iColIndex;

//Read Number of Rows & Columns
printf("Enter Number of Rows & Columns of Matrix\n");
scanf("%d%d",&iRowSize,&iColSize);
printf("Size of the Matrix is %d x %d\n",iRowSize,iColSize);
//iMatA[iRowSize][iColSize];
//Read Elements of Matrix
for(iRowIndex=0;iRowIndex<iRowSize;iRowIndex++)
{
	for (iColIndex=0;iColIndex<iColSize;iColIndex++)
	{
		printf("Enter %d row %d column element: ",iRowIndex+1,iColIndex+1);
		scanf("%d",&iMatA[iRowIndex][iColIndex]);
	}
}
printf("Original Matrix\n");
for(iRowIndex=0;iRowIndex<iRowSize;iRowIndex++)
{
	for(iColIndex=0;iColIndex<iColSize;iColIndex++)
	{
		printf("%d\t",iMatA[iRowIndex][iColIndex]);
	}
	printf("\n");
}

for(iRowIndex=0;iRowIndex<iRowSize;iRowIndex++)
{
	for(iColIndex=0;iColIndex<iColSize;iColIndex++)
	{
		iMatTransA[iColIndex][iRowIndex]=iMatA[iRowIndex][iColIndex];
	}
}

iTransRowSize = iColSize;
iTransColSize = iRowSize;

printf("Transpose Matrix\n");
for(iRowIndex=0;iRowIndex<iTransRowSize;iRowIndex++)
{
	for(iColIndex=0;iColIndex<iTransColSize;iColIndex++)
	{
		printf("%d\t",iMatTransA[iRowIndex][iColIndex]);
	}
	printf("\n");
}



	return 0;
}
