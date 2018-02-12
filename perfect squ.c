#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers");
scanf("%d%d",&a,&b);
c=a*b;
if((c/a)==b)
{
printf("Yes");
}else
{
printf("No");
}
return 0;
}
