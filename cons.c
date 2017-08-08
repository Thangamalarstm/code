#include<stdio.h>
void main()
{
char s;
int lcase,ucase;
clrscr();
printf("Enter the Alphabets");
scanf("%d",&s);
lcase=(s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
ucase=(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
if(lcase||ucase)
{
printf("It is Vowel");
}
else
{
printf("It is Consonant");
}
getch();
}

