#include<stdio.h>
int main() 
{
int num,c,b;
printf("Enter a  two number:");
scanf("%d",&num);
while(num!=0)
{
b=num%10;
c=c*10+b;
num=num/10;
}
printf("Reverse of a Numbers :%d",c);
return 0;
}
