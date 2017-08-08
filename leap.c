#include<stdio.h>
#include<conio.h>
void main() 
{
int at;
clrscr;
printf("Enter a number:");
scanf("%d",&at);
if(at%4==0)
{
printf("It is a Leap year:%d",at);
}
else
{
printf("It is not a Leap year:%d",at);
}
getch();#
