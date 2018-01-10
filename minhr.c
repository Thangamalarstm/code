#include<stdio.h>
main()
{
long min,hr,time;
printf("Enter the time");
scanf("%ld",&time);
hr=time/60;
min=time%60;
printf("The time is converted into min and hour:%ld%ld",min,hr);
}

