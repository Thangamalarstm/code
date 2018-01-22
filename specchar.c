#include <stdio.h>
void main() 
{
char s[100];
int c=0,i;
printf("Enter the string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='9')
c++;
}
printf("%d",c);
}
