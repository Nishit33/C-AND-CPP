//5. WAP to print factorial of given number


#include<stdio.h>
main()
{
	int n,fact=1,i=1;
	printf("Enter Number : "); // user input number 
	scanf("%d",&n);
	
	for(i=1;i<=n;i++) // using for loop 
	{
		fact=fact*i; // fact is multiply by number 
	}
	printf("So Factorial Number is : %d",fact); // print factorial number 
}
