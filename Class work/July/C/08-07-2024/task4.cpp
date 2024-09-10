#include<stdio.h>

main(){
	int age;
	
	printf("Enter Age : ");            //  if else and else if statment 
	scanf("%d" , &age);
	
	if(age>100)
	{
		printf("Please Input Correct Number!!");
	}
	else if(age>=18)
	{
		printf("You can vote!");
	}
	else
	{
		printf("You can not vote!");
	}
}
