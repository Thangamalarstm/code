#include<stdio.h>
#include<math.h>
int main()
{
int l,h,i,t,s,a,n=0,c=0;
printf("Enter the two numbers:");
scanf("%d%d",&l,&h);
printf("The armstrong num b/w %d and %d are:",l,h);
for(i=l+1;i<h;++i)
{s=i;
t=i;
while(t!=0)
{
t/=10;
++n;
}
while(s!=0)
{
a=s/10;
c+=pow(a,n);
s/=10;
}
if(c==i)
{
printf("%d",i);
}
n=0;
c=0;
}
return 0;
}
