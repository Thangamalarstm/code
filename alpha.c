#include<stdio.h>
void main()
{
char s;

clrscr();
printf("Enter the Alphabets");
scanf("%d",&s);
if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
{
printf("It is an Alpahabet:%c",s);
}
else
{
printf("It is a Alphabet:%c",s);
}
getch();
}
