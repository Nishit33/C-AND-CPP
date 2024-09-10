// 18.Calculate person’s Annual salary

#include<stdio.h>
main()
{
	int income,total;
	
	printf("\nEnter Your Monthly Income : ");  // user input monthly salary 
	scanf("%d",&income);
	
	total = income * 12;                // multiply by 12 
	
	printf("\nTotal Annual salary is : %d",total);
	
}
