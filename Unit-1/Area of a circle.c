#include <stdio.h>

int main(){
	float radius,area,pi;
	pi=3.142857142857143;
	printf("Enter radius:");
	scanf("%f",&radius);
	area = pi*radius*radius;
	printf("%f",area);
	return 0;
}
