#include<stdio.h>
int main()
{
int a,b,n;
printf("/n Enter the number");
scanf("%d",&n);
for(a=2;a<=n/2;++a)
{
if(n%a==0)
{
b=1;
break;
}
}
if(b==0)
{
printf("%d is a prime number:",n);
}
else{
printf("%d is not a prime number:",n);
}
return 0;
}
