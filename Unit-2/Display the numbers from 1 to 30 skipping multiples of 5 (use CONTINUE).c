#include<stdio.h>
int main()
{
	int a;
	int i;
   
	for(i=1;i<=30;i++)
	{
		if(i%5==0)
			continue;
		printf("%d\n",i);
	}   
	return 0;
}
