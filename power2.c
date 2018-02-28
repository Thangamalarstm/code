#include<stdio.h>
int main()
{
int s,t;
long c=1;
printf("Enter the base number..:");
scanf("%d",&s);
printf("Enter the exponent number..:");
scanf("%d",&t);
while(t!=0)
{
c*=s;
t--;
}
printf("The result is..:%lld",c);
return 0;
}
