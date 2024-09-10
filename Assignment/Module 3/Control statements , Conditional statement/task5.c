// 5. Check Number Is Positive or Negative


#include<stdio.h>
main()
{
	int n;
	
	printf("Enter The Number : ");  // ask number 
	scanf("%d",&n);
	
	if(n>0) // if number is 0 up number is positive 
	{
		printf("Number is positive!");
	}
	else if(n==0) // number is zero 
	{
		printf("Number is zero!");
	}
	else // otherwise number is negative
	{
		printf("Number is Negative");
	}
}
