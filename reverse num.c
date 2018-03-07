#include<stdio.h>
int main() 
{
int s,a,b;
printf("Enter a  two number:");
scanf("%d",&s);
while(s!=0)
{
b=s%10;
a=a*10+b;
s=s/10;
}
printf("Reverse of a Numbers :%d",a);
return 0;
}
