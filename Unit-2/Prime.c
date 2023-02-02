#include<stdio.h>
int main()
{
   int a;
   int i=1;
   int rem;
   int fact=0;
   
   printf("Enter any Integer:");
   scanf("%d",&a);
   
   while(i<=a)
   { 
      rem = a%i;
      if(rem==0)
      	fact=fact+1;
      i++;
   }
   if(a==0) 
   		printf("%d is a Zero Number",a);
   else if(a==1) 
   		printf("%d is a Prime Number",a);
   else if (fact==2)
		printf("%d is a Prime Number",a);
	else
		printf("%d is not a Prime Number",a);
	
   //printf("%d",fact);
   
   return 0;
}
