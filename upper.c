#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int l,i;
printf("Enter the characters..:");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(i==0)
{
s[i]=toupper(s[i]);
printf("%c",s[i]);
}
else
{
printf("%c",s[i]);
}
}
return 0;
}
