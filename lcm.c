 #include<stdio.h>
    int main()
    {
  int a,b,c;
  printf("Enter the two values");
   scanf("%d%d",&a,&b);
   c=(a<b)?a:b;
   while(1)
   {
   if(c%a==0&&c%a==0)
   {
   printf("The LCM of two num is %d and %dsis %d",a,b,c);
   break;
}   
++c;
}
    return 0;
    }
