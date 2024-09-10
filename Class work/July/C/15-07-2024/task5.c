#include<stdio.h>
main()
{
	int n,i,fact=1;      // (For) Factorial number 
	
	printf("Enter Number : ");  // user input number
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial Number is : %d",fact);
	
}
