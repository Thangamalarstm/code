#include<stdio.h>
int main() 
{
int n,a=0,b=0,c;
printf("Enter a   number:");
scanf("%d",&n);
for(c=0;c<n;c++)
{
if(c<==1)
{
d=c;
else
{
d=a+b;
a=b;
b=d;
}
printf("The fibonacci Numbers are:%d",d);
}
return 0;
}
