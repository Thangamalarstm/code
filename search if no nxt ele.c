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
printf("\nThe search element is..:%d",c[i]);
break;
}
else
{
    printf("The answer is..:%d",b+1);
    break;
}
}
return 0;
}
