//32.Write a C program to input basic salary of an employee and calculateits
//                         Gross salary according to following:
//                         Basic Salary <= 10000 : HRA = 20%, DA = 80%
//                         Basic Salary <= 20000 : HRA = 25%, DA = 90%
//                         Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
main()
{
	float basic,HRA,DA,grosssalary;
	
	printf("\nEnter Basic Salary : ");
	scanf("%f",&basic);
	
	if(basic<=10000)
	{
		HRA = basic*0.20;
		DA = basic*0.80;
	}
	
	else if(basic<=20000)
	{
		HRA = basic*0.25;
		DA = basic*0.90;
	}
	
	else 
	{
		HRA = basic*0.30;
		DA = basic*0.95;
	}
	
	grosssalary = basic + HRA + DA;
	
	printf("\nThe gross salary is : %.2f",grosssalary);
}
