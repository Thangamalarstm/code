#include<stdio.h>
int main()
{
int i,a,sum;
printf("Enter the number");
scanf("%d",&a);
for(i=0;i<a;i++)
{
sum=sum+i;
}
printf("The sum of natural number is..:%d",sum);
return 0;
}
