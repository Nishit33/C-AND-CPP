//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("\nEnter Number value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum += i*i;
	}
	
	printf("\nTotal is : %d",sum);
	
}
