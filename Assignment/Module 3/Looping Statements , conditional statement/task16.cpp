//16.Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>
main()
{
	int n;
	int i=1;
	int sum=0;
	
	printf("\nEnter Natural Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	
	printf("\nSum of total is : %d",sum);	
}
