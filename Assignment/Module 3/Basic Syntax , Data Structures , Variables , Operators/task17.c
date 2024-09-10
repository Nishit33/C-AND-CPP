// 17.Calculate person’s insurance premium based on salary

#include<stdio.h>
main()
{
	float salary,premium=0.05; // salary and premium rate
	
	printf("Enter the annual salary : "); // ask user salary
	scanf("%f",&salary);
	
	premium = salary * premium; // salary multiply premium rate
	
	printf("So the insurance premium is : %2.f",premium); // total 
	
}
