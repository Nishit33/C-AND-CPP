//8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
main()
{
	int n,max=0,digit;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	if(n<0)
	{
		n = -n;
	}
	
	while(n != 0)
	{
		digit = n % 10;
		if(digit > max)
		{
			max = digit;
		}
		n = n/10;
	}
	
	printf("\nMax Number is : %d",max);
}

