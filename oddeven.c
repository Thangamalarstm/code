#include<stdio.h>
void main() 
{
int n;
clrscr;
printf("Enter a number:");
scanf("%d",&n);
if(n/2==0)
{
printf("It is EVEN Number:%d",n);
}
else
{
printf("It is ODD Number:%d",n);
}
getch();
}
