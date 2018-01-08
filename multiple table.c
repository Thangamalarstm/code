#include<stdio.h>
int main() 
{
int i,n,c;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
c=n*i;
}
printf("The multiplication table is:%d*%d=%d",n,i,c);
return 0;
}
