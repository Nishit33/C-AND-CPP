#include<stdio.h>

main()
{
	int n,n1;
	
	printf("Enter Number 1 : ");        // which number is greater !
	scanf("%d" , &n);
	
	
	printf("Enter Number 2 : ");
	scanf("%d" , &n1);
	
	if(n>n1){
		printf("%d is greater %d " , n,n1);
	}
	else
	{
		printf("%d is greater %d" , n1,n);
	}
}
