#include<stdio.h>

void main()
{
    int number;
    float temp, sqrt;
    printf("Enter the number: ");
    scanf("%d", &number);

    sqrt = number / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;    
		
		if (temp == sqrt)
			break;    
    }
    printf("The square root of %d is %f", number, sqrt);
}
