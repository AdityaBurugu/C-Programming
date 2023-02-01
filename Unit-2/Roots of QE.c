#include<stdio.h>
#include<conio.h> 
#include<math.h> 
int main()
{
	int a,b,c,d;
	double root1,root2;
	printf("Enter the value of a,b,c\n");
	scanf("%d %d %d", &a,&b,&c);
	d= (b*b) - (4*a*c);
	printf("Discriminant of %dX^2+%dX+%d = %d",a,b,c,d);
	if(d >=0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2 =(-b-sqrt(d))/(2*a);
		printf("\nx1 = %lf\nx2 = %lf",root1,root2);
	}
	else 
	{
		printf("\nRoots are imaginary");
	}
	return 0;
}
