#include<stdio.h>
main()
{
int s,t,m,n,i;
t=0;
m=1;
printf("Enter the number%d\n%d",t,m);
scanf("%d,%d",&t,&m);
for(i=2;i<n;i++)
{
s=t+m;
t=m;
m=s;
}
printf("calculation %d",s);
}
