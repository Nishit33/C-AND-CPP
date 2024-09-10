#include<stdio.h>
main()
{
	int n;
	
	printf("Please Enter Number : ");  // which number is postive or negative
	scanf("%d" , &n);
	
	
	if(n>=0){
		printf("Number is positive" , n);
		
	}
   
	else {
		printf("Number is Negative!");
	}
} 
