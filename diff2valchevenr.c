#include<stdio.h>
int main() 
{
int s,a,b;
printf("Enter a number:");
scanf("%d%d",&a,&b);
s=a-b;
if(s%2==0)
{
printf("It is EVEN Number:%d",s);
}
else
{
printf("It is ODD Number:%d",s);
}
return 0;
}
