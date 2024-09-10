// 2. Write a C program to read the value of an integer m and display the value of
//                            n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include<stdio.h>
main()
{
	int n,m;
	
	printf("Enter Number An Integer : "); // Enter user input
	scanf("%d",&n);
	
	if(n>0) // so integer 0 up output we saw is 1
	{
		m = 1;
	}
	else if(n==0) // and input 0 output will be 0
	{
		m == 0;
	}
	else // last one input <0 output is -1 
	{
		m = -1;
	}
	
	printf("The value of m is : %d",m);  // output integer
}
