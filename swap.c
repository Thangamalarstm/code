#include<stdio.h>
int main() 
{
int a,b,t;
printf("\n Enter a&b numbers:");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\n After Swapping :%d %d",a,b);
return 0;
}
