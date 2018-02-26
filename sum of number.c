#include<stdio.h>
int main() 
{
int j,m,sum=0;
printf("Enter a number:");
scanf("%d",&m);
for(j=1;j<=m;j++)
{
sum=sum+j;
}
printf("The sum of natural number:%d",sum);
return 0;
}
