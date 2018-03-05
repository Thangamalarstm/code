#include<stdio.h>
int main()
{
int n,d[10],i;
printf("Enter the limit..:");
scanf("%d",&n);
printf("Enter the numbers are..:");
for(i=1;i<=n;i++)
{
scanf("%d",&d[i]);
}
for(i=1;i<=n;i++)
{
if(i!=d[i])
{
printf("The posiblity of changed positions are..%d",i);
break;
}
else
{
printf("%d",n);
}
}
return 0;
}

