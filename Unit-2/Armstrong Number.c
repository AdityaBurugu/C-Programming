#include<stdio.h>
#include<conio.h>
int main()
{
int digit,n,sum=0,temp;
printf("Enter any number: ");
scanf("%d",&n);
temp=n;
while(n!=0)
{
digit=n%10;
//printf("digit:%d\n",digit);
sum=sum+(digit*digit*digit);
n=n/10;
//printf("n:%d\n",digit);
}
if(temp==sum)
printf("The given number is Armstrong");
else
printf("The given number is not a Armstrong");
return 0;
}
