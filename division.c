#include<stdio.h>
int main()
{
int a,c;
printf("\n Enter the number..: ");
scanf("%d",&a);
c=a/2;
if((a%2)==0)
{
printf("\n %d",c);
}
else
{
printf("\n %d",a);
}
return 0;
}
