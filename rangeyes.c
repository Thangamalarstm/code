#include<stdio.h>
int main()
{
int i,n;
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
if(i==n)
{
printf("YES");
break;
}
}
if(i!=n)
{
    printf("NO");
}
return 0;
}
