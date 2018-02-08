#include<stdio.h>
int main();
{
int a,b;
char s;
a=(s='a'||s='e'||s='i'||s='o'||s='u');
b=(s='A'||s='E'||s='I'||s='O'||s='U');
if(a||b)
printf("The given string is vowel..*");
else
printf("The given string is not vowel..*");
return 0;
}
