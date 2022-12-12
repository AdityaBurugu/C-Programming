#include <stdio.h>
#include <math.h>
int main()
{
	int a=1,b=4;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a= %d \nb=%d ",a,b);

	return 0;
}
