#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,sum,sub,mul,div,mod,c;
printf("Enter the value of x: ");
scanf("%d",&x);
printf("Enter the value of y: ");
scanf("%d",&y);
printf("Select choice from \n1.Addition\n2.Subtraction\n3.Product\n4.Quotient\n5.Remainder\nEnter your choice: ");
scanf("%d",&c);
switch(c)
{
case 1:
	sum=x+y;
	printf("The sum of x and y is %d",sum);
	break;
case 2:
	sub=x-y;
	printf("The sub of x and y is %d",sub);
	break;
case 3:
	mul=x*y;
	printf("The mul of x and y is %d",mul);
	break;
case 4:
	div=x/y;
	printf("The div of x and y is %d",div);
	break;
case 5:
	mod=x%y;
	printf("The mod of x and y is %d",mod);
	break;
default :
	printf("Invalid Choice");
	break;
}
}
