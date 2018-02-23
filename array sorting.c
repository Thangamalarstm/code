#include<stdio.h>
 int main()
{
int a[25],i,j,n,temp;
printf("\n Enter the number..:");
scanf("%d",&n);
printf("\n Enter the elements..:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
 }
  }
    
}

   printf("\n Lexicographical  is...");
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;
}
