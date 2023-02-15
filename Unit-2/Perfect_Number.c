#include<stdio.h>
int main()
{
   int a;
   int i=1;
   int rem;
   int sum=0;
   
   printf("Enter any Integer:");
   scanf("%d",&a);
   
   while(i<a)
   { 
      rem = a%i;
      if(rem==0)
      	sum+=i;
      i++;
   }
   if (sum==a)
		printf("%d is a Perfect Number",a);
	
	else
		printf("%d in not a Perfect Number",a);
	   
   return 0;
}
