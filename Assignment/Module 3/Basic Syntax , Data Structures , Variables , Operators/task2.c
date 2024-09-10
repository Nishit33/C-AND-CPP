#include<stdio.h>
main()
{
	int num1,num2;     // 2 int store value
	
	printf("Enter Number A : ");    // user input num1 number 
	scanf("%d",&num1);
	
	printf("Enter Number B : ");   // user input num2 number 
	scanf("%d",&num2);
	
	printf("\nA and B Addition is : %d",num1+num2);         // Both Number addition
	printf("\nA and B Subtraction is : %d",num1-num2);      // two number Subtraction
	printf("\nA and B Multiplication is : %d",num1*num2);   //  Multiplication
	printf("\nA and B Division is : %.2f",(float)num1/num2);// Division
	printf("\nA and B Modulo is : %d",num1%num2);           // Modulo
	
}
