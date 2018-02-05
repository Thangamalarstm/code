#include<stdio.h>
int main()
{
int d,e;
scanf(" Enter the numbers %d,%d",&d,&e);
d=d^e;
e=d^e;
d=d^e;
printf("After swapping:%d,%d",d,e);
return 0;
}
