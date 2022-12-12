#include <stdio.h>

int main()
{
	float num1,num2,num3;
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	printf("Enter Number 3: ");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3)
	{
		printf("Num1 is greatest among all");	
	}
	else if (num2>num1 && num2>num3){
		printf("Num2 is greatest among all");	
	}	
	else{
		printf("Num3 is the greatest among all");
	}
}
