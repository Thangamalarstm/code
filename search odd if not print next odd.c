#include<stdio.h>
int main()
{
int a,b,c[20],i;
printf("\n Enter the number");
scanf("%d",&a);
printf("\n Search Element");
scanf("%d",&b);
printf("\nThe numbers are..:");
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<a;i++)
{
if(c[i]==b)
{
    if(b%2==1)
printf("\n data%d",b);
break;
}
else
{
    if(c[i+1]%2==1)
    printf("\n %d",c[i+1]);
    break;
}
}
return 0;
}
