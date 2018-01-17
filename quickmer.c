#include<stdio.h>
main()
{
int a[25],i,j,n,m;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[j+1]
a[j+1]=temp;
 }
  }
  }
  if(n%2==0)

 {
 m=n/2;
  printf("The sorted array is...%d",a[m]);
}
}
