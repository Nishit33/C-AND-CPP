#include <stdio.h>
main(){
	
	int n1,n2,n3;
	
	printf("Enter Number A : ");
	scanf("%d", &n1);
	
	printf("Enter Number B : ");
	scanf("%d", &n2);
	
	printf("Enter Number C : ");
	scanf("%d", &n3);
	
	// 45 , 65 , 56 
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is gratest!",n1);
		}
		else
		{
			printf("%d is greatest",n3);
		}
	}
	
	else
	{
		if(n2>n3)
		{
			printf("%d is gretest!",n2);
		}
		else
		{
			printf("%d is greatest ",n3);
		}
	}
}
