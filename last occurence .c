#include<stdio.h>
int main()
{
char s[10];
int l,i,a;
printf("Enter the number to be displayed the character..:");
scanf("%d",&a);
printf("Enter the word..:");
scanf("%s",s);
l=strlen(s);
printf("the displayed occurance are..:");
for(i=a;i<=l;i++)
{
printf("%c",s[i]);
}
return 0;
}
