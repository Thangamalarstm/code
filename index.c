#include<stdio.h>
main()
{
int a[250],i,,n;
printf("Enter the  number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the value");
  scanf("%d",&a[i]);
}
  for(i=0;i<=n;i++)
  {

  
  printf("maximum element is %d%d",a[i],i);
}
}
