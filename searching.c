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
printf("\n YES");
}
else
{
    printf("\n No");
}
}
return 0;
}
