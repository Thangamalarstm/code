#include <stdio.h>
int main() {
    int n,k,r,a=0;
	printf("enter the number");
	scanf("%d",&n);
	k=n;
	while(k>0)
	{
		r=k%10;
		a=(a*10)+r;
		k=k/10;
	}
	
		while(a>0)
	{
		r=a%10;
	if(r%2==0);
	else
	printf("%d\t",r);
		a=a/10;
	}
	return 0;
	}
