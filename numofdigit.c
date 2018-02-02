#include <stdio.h>
int main()
{
   int n,c=0;
   printf("Enter an integer: ");
   scanf("%d", &n);
   while(n!=0)
   {
   n /= 10;
   ++c;
    }
    printf("Number of digits: %d", c);
    return 0;
}
