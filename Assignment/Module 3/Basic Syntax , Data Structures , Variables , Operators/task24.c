// 24.Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
{
	int num1,num2,num3,num4,num5; // name
	float s1,s2,s3,s4,s5;         // salary
	int totalsalary,average;    
	
	
	printf("\nEnter Your Name : "); // name userinput
	scanf("%s",&num1);
	printf("Enter Your salary : ");
	scanf("%f",&s1);
	
	printf("\nEnter Your Name : ");
	scanf("%s",&num2);
	printf("Enter Your salary : ");
	scanf("%f",&s2);
	
	printf("\nEnter Your Name : ");
	scanf("%s",&num3);
	printf("Enter Your salary : ");
	scanf("%f",&s3);
	
	printf("\nEnter Your Name : ");
	scanf("%s",&num4);
	printf("Enter Your salary : ");
	scanf("%f",&s4);
	
	printf("\nEnter Your Name : ");
	scanf("%s",&num5);
	printf("Enter Your salary : ");
	scanf("%f",&s5);
	
	
   	totalsalary = s1+s2+s3+s4+s5; // all salary 
   	average = totalsalary/5;  // total salary / num of employee
   	
   	printf("\nAverage salary is : %d",average); 
   	printf("\nTotal salary is : %d",totalsalary);
   	
   	
}

