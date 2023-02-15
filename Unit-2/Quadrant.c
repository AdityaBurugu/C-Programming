#include <stdio.h>

int main()
{
	int x,y;
	printf("Enter x coordinate:");
	scanf("%d",&x);
	printf("Enter y coordinate:");
	scanf("%d",&y);

	if (x>=0 && y>=0)
		printf("Point(%d,%d) is in first quadrant",x,y);
		
	else if(x<0 && y>0)
		printf("Point(%d,%d) is in second quadrant",x,y);
		
	else if(x<0 && y<0)
		printf("Point(%d,%d) is in third quadrant",x,y);
		
	else if(x>0 && y<0)
		printf("Point(%d,%d) is in fourth quadrant",x,y);
		
	else
		printf("Invalid Input");

	return 0;
	
}
