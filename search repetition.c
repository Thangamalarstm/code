#include<stdio.h>
int main()
{
int a,b,c[20],i,s=0;
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
 s++;   
}
}
printf("%d",s);
return 0;
}
