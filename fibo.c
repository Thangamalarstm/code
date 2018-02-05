#include<stdio.h>
int main() 
{
int n,a=0,b=0,i,e;
printf("Enter a   number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<==1)
{
e=i;
else
{
e=a+b;
a=b;
b=e;
}
printf("The fibonacci Numbers are:%d",e);
}
return 0;
}
