#include<stdio.h>
#include<string.h>
int main()
{
char a[25],b[40];
int a1,b1;
printf("Enter the string");
scanf("%s",a);
printf("Enter the string");
scanf("%s",b);
a1=strlen(a);
b1=strlen(b);
if(a1>b1) 
{
printf("The string is....: %s",a);
}
else
{
printf("The string is....: %s",b);
}
return 0;
}
