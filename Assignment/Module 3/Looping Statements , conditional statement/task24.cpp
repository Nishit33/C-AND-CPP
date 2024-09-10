// 24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int n,i;
	int sum=0;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nTotal 1 to %d Number Addition is : %d",n,sum);
}
