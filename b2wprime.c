#include<stdio.h>
#include<string.h>
int main()
{
int a,b,cnt=0,i,j,c=0;
printf("Enter the 2 numbers..:");
scanf("%d%d",&a,&b);

for(i=a;i<b;i++)
{
    for(j=2;j<a;j++)
{
    if(i%j==0)
    {
        cnt=1;
        break;
    }
    else
    {
        cnt=0;
    }
   
}

if(cnt==0)
{
c=c+1;

}
}
printf("prime numbers are:%d",c);
return 0;
}
