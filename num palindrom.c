#include<stdio.h>
int main()
{
int n,a.b,c=0;
printf("Enter the number");
scanf("%d",&n);
a=n;
while(n!=0)
{
b=n%10;
c=c*10+b;
n/=10;
}
if(a==c)
{
printf("%d is a palindrome number",a);
}
else
{
printf("%d is not a palindrome number",a);
}
return 0;
}
