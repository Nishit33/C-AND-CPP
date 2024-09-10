// 7. Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int n;
	
	printf("Enter Number : "); // user input
	scanf("%d",&n);
	
	
	if(n>100) // if number is out of 100 so this condition
	{
		printf("Please Enter Valid Number!!!");
	}
	else if(n>=33) // if number is 33 up you are pass
	{
		printf("You are pass!");
	}
	else // else number is 33 down you are faill
	{
		printf("You are fail!!!");
	}
}
