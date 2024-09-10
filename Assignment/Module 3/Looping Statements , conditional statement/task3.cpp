//3. WAP to take 10 no. Input from user find out below values

//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers


#include<stdio.h>
main()
{
	int n,i=1,odd=0,even=0,evencount=0,oddcount=0; // int 
	
	while(i<=10) // 10 times ask 
	{
	
	printf("\nEnter Number : "); // user input number 
	scanf("%d",&n);
	
	if(n%2==0) // if else use 2==0 number is even
	{
		printf("This is even number\n",even);
		even++; // even count
		evencount = evencount+n; // evencount plus total even number
		
	}
	else // else use odd number 
	{
		printf("This is odd number\n",odd); // odd number 
		odd++; // odd number count
		oddcount = oddcount+n; // oddcount plus total odd number 
	}
	i++;
	
}
printf("\nTotal even number is : %d",even); // Total even number 
printf("\nTotal odd number is : %d",odd);  // Total odd number
printf("\nSo Total Even number addition is : %d",evencount); // All even number addition 
printf("\nSo Total Odd number addition is : %d",oddcount); // All odd number addition
}
