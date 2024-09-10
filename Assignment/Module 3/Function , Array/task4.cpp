// 4. WAP to find factorial using recursion

#include<stdio.h>

fac()
{
	int n,i,fact=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact = fact*i;		
	}
	
	printf("\nThe Factorial Number is : %d",fact);
	
}

main()
{
	fac();
}
