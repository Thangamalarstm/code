#include<stdio.h>
int main ()
{
  int a,b,c,d;
  printf ("\n Enter A value");
  scanf ("%d", &a);
  printf ("\n Enter B value");
  scanf ("%d", &b);
  printf ("\n Enter C value");
  scanf ("%d", &c);
  d= (a*b)%c;
  printf ("\n The result is..:%d", d);
  return 0;
}
