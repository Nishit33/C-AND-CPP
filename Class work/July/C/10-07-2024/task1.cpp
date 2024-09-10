#include <stdio.h>

main(){
	
	int a,b;
	
	printf("Enter value A : ");
	scanf("%d" , &a);
	
	printf("Enter value B : ");
	scanf("%d", &b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter swapping value A is %d" , a);
    printf("\nAfter swapping value B is %d" , b);	
}
