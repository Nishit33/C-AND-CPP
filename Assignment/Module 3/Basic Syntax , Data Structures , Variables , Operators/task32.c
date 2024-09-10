// 32.Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	int n1,n2; // two value store
	
	printf("Enter Number A : "); // ask user input 1
	scanf("%d",&n1);
	
	printf("Enter Number B : "); // ask user input 2 
	scanf("%d",&n2);
	
	if(n1>n2) // if n1>n2 print this 
	{
		printf("SO %d is greater than %d ",n1,n2);
	}
	else // otherwise print anotherone
	{
		printf("So %d is greater than %d",n2,n1);
	}
}
