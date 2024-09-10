#include<stdio.h>

main(){
	
	int a,b,temt;       // swapping type
	
	
	printf("Enter Number A : ");
	scanf("%d" , &a);
	
	printf("\nEnter Number B : ");
	scanf("%d" , &b);
	
	temt = a;
	a = b;
	b = temt;
	
	
	printf("\nAfter swapping value A is : %d " , a);
    printf("\nAfter swapping value B is : %d " , b);	
}
