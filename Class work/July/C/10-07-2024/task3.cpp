#include<stdio.h>

main()
{
	int n1,n2,n3;
	
	printf("Enter Number A : ");
	scanf("%d", &n1);
	
	printf("Enter Number B : ");
	scanf("%d", &n2);
	
	printf("Enter Number C : ");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%d is greatest !" , n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d is greatest !" , n2);
	}
	else
	{
		printf("%d is greatest !" , n3);
	}
}
