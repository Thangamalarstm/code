#include<stdio.h>
void main() 
{
int a,b,c;
clrscr;
printf("\nEnter a numbers:\n");
scanf("%d\n%d\n%d\n",&a,&b,&c);
if(a>b&&a>c)
{
printf("A is greatest number:%d",a);
}
else if(b>c)
{
printf("B is greatest number:%d",b);
}
else
{
printf("C is greatest number:%d",c);
}
getch();
}
