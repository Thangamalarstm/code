#include<stdio.h>
int main() 
{
int n,c=0;
printf("Enter a number:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("Reverse of a Numbers :%d",c);
return 0;
}
