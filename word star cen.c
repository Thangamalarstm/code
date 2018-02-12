#include<stdio.h>
#include<string.h>
int main()
{
char b[50];
int a,c,d;
printf("Enter the words");
scanf("%s",&b);
a=strlen(b);
d='*';
b[a/2]=d;
if(a%2==0)
{
b[(c-1)/2]=d;
}
printf("%s",b);

return 0;
}
