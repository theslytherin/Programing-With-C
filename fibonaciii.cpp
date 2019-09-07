#include<stdio.h>
main(){
	int a=0,b=1,i,n,s;
	printf("enter no of terms");
	scanf("%d",&n);
	if(n<=2)
	printf("fibonaci series does not form");
	else
	{
		printf("%d %d ",a,b);
		for(i=3;i<=n;i++)
		{
			s=a+b;
			printf("%d ",s);
			a=b;
			b=s;
		}
	}
}
