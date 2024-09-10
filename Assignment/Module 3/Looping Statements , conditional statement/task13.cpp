//13.calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int i=1,n;
	int fact=1;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\nFactorial Number is : %d",fact);
}

