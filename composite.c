#include<stdio.h>
int main()
{
int c=0,l,i;
printf("/n Enter the two number");
scanf("%d",&l);
for(i=2;i<=l/2;i++)
{
if(l%i==0)
{
c=1;
break;
}
}
if(c==0)
{
printf("NO");
++l;
}
else
{
printf("YES,It is composite");

}
return 0;
}
