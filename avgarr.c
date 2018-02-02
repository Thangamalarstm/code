#include<stdio.h>
int main()
{
int a[100],i,n,c,d;
printf("Enter the  number");
scanf("%d",&n);
printf("Enter the numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c+=a[i];
}
d=c/n;
printf("The result is :%d",d);
return 0;
}
