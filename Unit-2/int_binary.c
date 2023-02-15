
#include <stdio.h>

int main()
{
  int n,temp;
  long long bin = 0;
  int rem, i = 1;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  
  temp=n;
  
  while (n!=0)
  {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  printf("%d in decimal =  %lld in binary", temp, bin);
  return 0;
}

