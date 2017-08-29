#include<stdio.h>
    int gcd(inta,int b)
    {
  if(a==0||b==0)
  return 0;
  if(a==b)
  return a;
  if(a>b)
  return gcd(a-b,b);
  return gcd(a,b-a);
  }
  int main()
   {
   int a=25,b=35;
   printf("The GCD of two num is %d and %dsis %d",a,b,gcd(a,b));
    return 0;
    }
