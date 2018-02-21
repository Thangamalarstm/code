#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,len;
printf("Enter the Alpha numeric");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
printf("%c",a[i]);
}
}return 0;
}
