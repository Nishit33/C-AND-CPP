#include<stdio.h>
main(){
	int n,n1;
	
	printf("Enter Value A is : ");
	scanf("%d" , &n);
	
	printf("Enter Value B is : ");
	scanf("%d" , &n1);
	
	if(n>n1)
	{
		printf("%d is greater than this %d" , n,n1);
	}
	else
	{
		printf("%d is greater than this %d" , n1,n);
	}
}
