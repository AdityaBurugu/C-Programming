#include<stdio.h>
#include<conio.h>
void main()
{
int digit,n,sum=0,temp=24;
printf("Enter any number\n");
scanf("%d",&n);
temp=n;
while(n!=0)
{
digit=n%10;
sum=sum+(digit*digit*digit);
n=n/10;
}
if(temp==sum)
printf("The given number is Armstrong");
else
printf("The given number is not a Armstrong");
return 0;
}
