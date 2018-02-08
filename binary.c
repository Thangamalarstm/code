#include<stdio.h>
int main()
{
int a;
printf("ENTER The number:\n");
scanf("%d",&a);
if(a%10==0||a%10==1)
{
printf( "Yes");
}
else
{
printf( "No");
}
return 0;	
}
