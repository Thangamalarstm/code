#include<stdio.h>
int main() 
{
int num,c=1,b=0;
printf("Enter a  number:");
scanf("%d",&num);
while(num!=0)
{
b=num%10;
c=c*b;
num=num/10;
}
printf("Product of a Numbers :%d",c);
return 0;
}
