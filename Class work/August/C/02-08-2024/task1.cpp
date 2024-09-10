#include<stdio.h>

fac()
{
	int n,i,fac=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	
	return  fac;
	
}

add()
{
	int n1,n2;
	
	printf("Enter Number A : ");
	scanf("%d",&n1);
	
	printf("Enter Number B : ");
	scanf("%d",&n2);
	
	return n1+n2;
}

main()
{
	printf("%d",fac());
	printf("%d",add());
}
