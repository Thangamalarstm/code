#include<stdio.h>
int main()
{
int b,e;
long long r=1;
printf("Enter the base number");
scanf("%d",&b);
printf("Enter the exponent number");
scanf("%d",&e);
while(e!=0)
{
r*=b;
e--;
}
printf("The result is :%lld",r);
return 0;
}
