#include<stdio.h>
int main() 
{
int n,a,b;
printf("Enter a  two number:");
scanf("%d",&n);
while(n!=0)
{
b=n%10;
a=a*10+b;
n=n/10;
}
printf("Reverse of a Numbers :%d",a);
}
return 0;
}
