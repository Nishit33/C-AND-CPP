#include<stdio.h>
main()
{
	int n,i,fact=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("\nTotal Factorial Number is : %d",fact);
}
