// 20.Accept monthly salary from the user and deduct 10% insurance premium,
//                                      10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
	int salary,premium,loan,remaining;
	
	printf("Enter Your Monthly Salary : ");
	scanf("%d",&salary);
	
	premium = salary * 0.10; // 10% deduct in insurance premium 
	loan = salary * 0.10; // 10% Loan installment 
	
	remaining = salary - premium - loan; // salary cut premium and loan amount 
	
	printf("\nMonthly salary is : %d",salary);
	printf("\ninsurance premium deduct : %d",premium);
	printf("\nloan installment deduct : %d",loan);
	
	printf("\nRemaining Salary is : %d",remaining);
	
}
