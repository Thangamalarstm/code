#include<stdio.h>
    int gcd(int a,int b)
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
   printf("\n Enter the A and B values");
   scanf("%d%d",&a,&b);
   printf("The GCD of two number is %d and %d is %d",a,b,gcd(a,b));
    return 0;
    }
