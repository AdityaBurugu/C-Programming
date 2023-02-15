#include<stdio.h>
int main()
{
   int a;
   int i;
   int fact = 1;

   
   printf("Enter any Integer:");
   scanf("%d",&a);
   
   for(i=1;i<=a;i++)
   {
   	fact*=i;
   }
    printf("Factorial of %d is %d",a,fact);
    
   return 0;
}
