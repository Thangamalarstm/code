#include<stdio.h>
   
  int main()
   {
   int a=25,b=35,i,hcf;
   for(i=1;i<=a||i<=b;i++)
   {
   if(a%i==0&&b%i==0)
   {
   hcf=i;
   
   printf("The HCF of num is %d",hcf);
    return 0;
    }
