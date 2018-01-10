#include<stdio.h>
main()
{
int a[25],i,m=0,n;
printf("Enter the required number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the value");
  scanf("%d",&a[i]);
}
  for(i=0;i<=n;i++)
  {
if(m>a[i])
{
m=a[i];
}
  }
  printf("maximum element is %d",m);
}
