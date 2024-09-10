#include<stdio.h>
main()
{
	int n;
	int i=1;
	int fact=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\nTotal factorial number is : %d",fact);
}
