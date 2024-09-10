// 4. WAP to make simple calculator (operation include Addition, Subtraction,
//                                    Multiplication, Division, modulo) using conditional statemen

#include<stdio.h>
main()
{
	int n1,n2,result;
	char operator;
	
	printf("Enter Number A : ");
	scanf("%d",&n1);
	
	printf("Enter Number B : ");
	scanf("%d",&n2);
	
	printf("Enter Operator (+,-,*,/, %) : ");
	scanf(" %c",&operator);
	
	if(operator=='+')
	{
		
		printf("Result : %d and %d = %d",n1,n2,n1+n2);
		
	}
	else if(operator=='-')
	{
		
		printf("Result : %d and %d = %d",n1,n2,n1-n2);
		
	}
	else if(operator=='*')
	{
		
		printf("Result : %d and %d = %d",n1,n2,n1*n2);
		
	}
	else if(operator=='/')
	{
		
		printf("Result : %d and %d = %d",n1,n2,n1/n2);
		
	}
	else if(operator=='%')
	{
		
		printf("Result : %d and %d = %d",n1,n2,n1%n2);
		
	}
	
}
