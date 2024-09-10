#include<stdio.h>
main()
{
	int n,i=1,fact=1;     // while factorial number
	
	printf("Enter Number : ");  // user input
	scanf("%d",&n);
	
	while(i<=n) 
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial number is : %d",fact);
}
