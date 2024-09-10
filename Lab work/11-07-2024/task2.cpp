#include <stdio.h>

main()
{
	int age;
	
	printf("Please Enter Your Age : ");
	scanf("%d" , &age);
	
	if(age>100){
		printf("You can not voting this age!!");
	}
	else if(age>=18){
		printf("You can vote!!");
	}
	else if(age<0){
		printf("Please Input Correct Number!!");
	}
	else{
		printf("You Can not vote!");
	}
}
