#include<stdio.h>
int main() 
{
int i=1,n,sum=0;
clrscr;
printf("Enter a number:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("The sum of natural number:%d",sum);
return 0;
}
