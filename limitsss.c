#include<stdio.h>
int main() 
{
int i,a,b,n;
printf("Enter a   number:");
scanf("%d",&n);
printf("Enter a  limit:");
scanf("%d%d",&a,&b);
if(n>a&&n<b)
{
printf("yes");
}
else{
printf("NO");
}
return 0;
}
