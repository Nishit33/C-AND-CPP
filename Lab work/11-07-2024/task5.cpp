#include<stdio.h>

main()
{
	int n1,n2,n3;
	
	printf("Enter Number A : ");
	scanf("%d",&n1);
	
	printf("Enter Number B : ");
	scanf("%d",&n2);
	
	printf("Enter Number C : ");
	scanf("%d",&n3);
	
	// 67	78	 89
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is gretest number",n1);
		}
		else
		{
			printf("%d is gretest number",n3);
		}
	}
	
	// 67	78	 89
	
	else
	{
		if(n2>n3)
		{
			printf("%d is gretest number",n2);
		}
		else
		{
			printf("%d is gretest number",n3);
		}
	}
}
