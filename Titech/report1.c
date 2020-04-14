#include <stdio.h>

int gcd(int a0, int a1)
{
  int a, b, r;
  a = a0;
  b = a1;
  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main(){
  int a = gcd(24, 36);
  printf("%d\n",a);
  return(0);
}
