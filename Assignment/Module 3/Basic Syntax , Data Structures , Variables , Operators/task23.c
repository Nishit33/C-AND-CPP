// 23.WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
main()
{
	int num1,num2;  // two number 
	
	printf("Enter Number A : "); // user input number 1
	scanf("%d",&num1);
	
	printf("Enter Number B : "); // user input number 2
	scanf("%d",&num2);
	
	num1 = num1*num2; // same as + = *
	num2 = num1/num2; // same as - = /
	num1 = num1/num2; // same as - = /
	
	printf("\nAfter swap A is : %d\n",num1);
	printf("After swap B is : %d",num2);
}
