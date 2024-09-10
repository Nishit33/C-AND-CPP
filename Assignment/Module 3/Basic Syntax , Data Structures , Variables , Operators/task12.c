#include<stdio.h>
main()
{
	int student,Total;       
	int apple = 5;      // 5 apples to each student  
	
	printf("\nEnter Number of Student : ");  // user input number of student 
	scanf("%d",&student);
	
	Total = student*apple;  // so after input number we multiply 5 apples
	
	printf("\nTotal Apples Required : %d",Total); // Total is output 
}
