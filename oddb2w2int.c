#include<stdio.h>
int main() 
{
int i,a,b;
printf("Enter a  two number:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("The ODD Numbers are:%d",i);
}
return 0;
}
