#include<stdio.h>
main()
{
int a[25],i,m=0;
for(i=0;i<=10;i++)
{
printf("enter the value");
  scanf("%d",&a[i]);
}
  for(i=0;i<=10;i++)
  {
if(m<a[i])
{
m=a[i];
}
  }
  printf("maximum element is %d",m);
}
