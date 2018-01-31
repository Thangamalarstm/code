#include<stdio.h>
int main()
{
char s[20];
int i=0,c=1;
scanf("%s",s);
while(s[i]!='\0')  
{
if(s[i]>='0' && s[i]<='9')	
{
c++;
i++;
}
printf("%d",c);
}
return 0;
}
