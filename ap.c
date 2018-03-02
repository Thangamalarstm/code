#include<stdio.h>
#include<math.h>
int main()
{
    int a,d,n,s=0,t,i;
    printf("Enter the A,D,N:");
    scanf("%d%d%d",&a,&d,&n);
    s=(n*(2*a+(n-1)*d))/2;
    t=a+(n-1)*d;
    for(i=a;i<=t;i=i+d)
    {
        if(i!=t)
        {
            printf("%d+",i);
            
        }
        else
        {
            printf("%d=%d",i,s);
            
        }
    }
