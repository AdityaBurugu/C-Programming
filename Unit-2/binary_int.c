
#include <stdio.h>
#include <math.h>

int main() {
  long long n,temp;
  int dec = 0, i = 0, rem;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  temp=n;
  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  printf("%lld in binary = %d in decimal", temp, dec);
  return 0;
}

