#include<stdio.h>
int main()
{
int i,b=0,s;
printf("\n Enter the number");
scanf("%d",&s);
for(i=2;i<=s/2;++i)
{
if(s%i==0)
{
b=1;
break;
}
}
if(b==0)
{
printf("%d is a prime number:",i);
  s++;
}
else{
printf("%d is not a prime number:",i);
}
return 0;
}
