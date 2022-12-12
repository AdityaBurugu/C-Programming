#include <stdio.h>
int main()
{
	int a=1,b=4,temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d \nb=%d ",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d \nb=%d ",a,b);

	return 0;
}
