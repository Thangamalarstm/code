#include<stdio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("The nearest num is..:%d",n-2);
}
else
{
printf("The nearest num is..:%d",n-1);
}
return 0;
}
