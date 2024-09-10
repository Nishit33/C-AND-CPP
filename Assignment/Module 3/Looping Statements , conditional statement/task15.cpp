//15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>
main()
{
	int n,i=1;
	int sum=0;
	
	while(i<=10)
	{
		printf("\nNumber %d : ",i);
		scanf("%d",&n);
		i++;
		sum=sum+n;
	}
	
	printf("\nTotal Sum : %d",sum);
}

