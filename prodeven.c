#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the number a&b");
scanf("%d%d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("\n It is an even number");
}
else
{
printf("\n It is a odd number");
}
return 0;
}
