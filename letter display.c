#include<stdio.h>
int main()
{
int i,l;
char s[100];
printf("Enter the string..:");
scanf("%s",s);
printf("Enter the number of string to be display..:");
scanf("%d",&l);
for(i=0;i<l;i++)
{
printf("%c",s[i]);
}
return 0;
}
