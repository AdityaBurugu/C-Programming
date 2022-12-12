#include <stdio.h>

int main(){
	int input,fact,i;
	fact = 1;
	i=1;
	printf("Enter Number: ");
	scanf("%d",&input);
	while (i<=input){
		fact=fact*i;
		i=i+1;
	}
	printf("%d",fact);
}
