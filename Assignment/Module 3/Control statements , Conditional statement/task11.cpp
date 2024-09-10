//11.WAP to find number is even or odd using ternary operator

#include<Stdio.h>
main()
{
	int number;
	
	printf("\nEnter Number : ");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("\nNumber is even!");
	}
	else
	{
		printf("\nNumber is odd");
	}
}
