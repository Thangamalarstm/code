#include<stdio.h>
int main()
{
int a[25],i,min,n;
printf("Enter the required number");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("maximum element is %d",min);
return 0;
}
