// 25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int n1,n2,n3,n4,n5; // n is save all expense 
	int average,total=0; // average and total 
	
	
	printf("Enter Expense 1 : "); // user input one 
	scanf("%d",&n1);
	
	printf("\nEnter Expense 2 : "); 
	scanf("%d",&n2);
	
	printf("\nEnter Expense 3 : ");
	scanf("%d",&n3);
	
	printf("\nEnter Expense 4 : ");
	scanf("%d",&n4);
	
	printf("\nEnter Expense 5 : ");
	scanf("%d",&n5);
	
	total = n1+n2+n3+n4+n5; // so total all expense addition
	
	average = total/5;  // all expense divide by 5 
	
	printf("\nThe Average Expense is : %d",average); 
	
	printf("\nSo Total Expense all 5 is : %d",total); 
}
