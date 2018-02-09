#include<stdio.h>
int main()
{
int i,b,s;
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
}
else{
printf("%d is  a composite number:",i);
}
return 0;
}
