#include<stdio.h>
int main() 
{
int i,n,fact=1;
printf("Enter a number:");
scanf("%d",&n);
if(n<0)
{
printf("it does not perform factorial");

for(i=1;i<=n;i++)
{
fact*=i;
}
printf(factoraial of:%d=%d",n,fact);
return 0;
}
