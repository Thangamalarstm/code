#include<stdio.h>
main()
{
int a[25],i,j,n;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
for(j=1;j<=n-i-1:j++)
{
temp=a[j];
a[j]=a[j+1]
a[j+1]=temp;
 }
  }
  printf("The sorted array is...%d",a[i]);
}
