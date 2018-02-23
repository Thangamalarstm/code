#include<stdio.h>
int main()
{
int t,r,d;
float p;
printf("\n Amount..:");
scanf("%f",&p);
printf("\n Time..:");
scanf("%d",&t);
printf("\n Rate..:");
scanf("%d",&r);
d=((p*t*r)/100);
printf(" simple interest is..:%d",d);
return 0;
}
