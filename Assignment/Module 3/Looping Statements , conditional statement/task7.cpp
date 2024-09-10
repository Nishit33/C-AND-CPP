//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int n;
	int reversed=0;
	int remainder;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	while(n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 +remainder;
		n = n/10;
	}
	
	printf("\nReversed Number is : %d",reversed);
}
