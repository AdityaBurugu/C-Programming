#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter x coordinate:");
	scanf("%d",&x);
	printf("Enter y coordinate:");
	scanf("%d",&y);

	if (x>=0 && y>=0)
		printf("Point is in first quadrant");
		
	else if(x<0 && y>0)
		printf("Point is in second quadrant");
		
	else if(x<0 && y<0)
		printf("Point is in third quadrant");
		
	else if(x>0 && y<0)
		printf("Point(%d,%d) is in fourth quadrant",x,y);
		
	else
		printf("Invalid Input");

	return 0;
	
}
