#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,len;
printf("Enter the Alpha numeric..:");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i=i+2)
{
printf("%c\n",a[i]);
}
for(i=1;i<len;i=i+2)
{
printf("%c",a[i]);
}
return 0;
}
