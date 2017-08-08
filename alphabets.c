#include<stdio.h>
void main()
{
char s;
clrscr();
printf("Enter the Alphabets");
scanf("%d",&s);
if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
{
printf("It is an Alphabet:%c",s);
}
else
{
printf("It is not an Alphabet:%C",s);
}
getch();
}
