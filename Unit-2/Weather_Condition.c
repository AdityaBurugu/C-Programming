#include <stdio.h>

int main()
{
	int itempc;
	printf("Enter Temperature in degree Celsius:");
	scanf("%d",&itempc);
	
	if(itempc<0)
		printf("Freezing Weather");
	
	else if (itempc>=0 && itempc<10)
		printf("Very Cold Weather");
		
	else if (itempc>=10 && itempc<20)
		printf("Cold Weather");
		
	else if (itempc>=20 && itempc<30)
		printf("Normal in Temp");
		
	else if (itempc>=30 && itempc<40)
		printf("It's Hot");
		
	else if (itempc>=40)
		printf("It's Very Hot");

	return 0;
	
}
