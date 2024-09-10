#include<stdio.h>
main()
{
	int n1,n2,n3;  // using || (or) which number is gretest only one condition true
	
	printf("Enter number A : ");
	scanf("%d",&n1);
	
	printf("Enter number B : ");
	scanf("%d",&n2);
	
	printf("Enter number C : ");
	scanf("%d",&n3);
	
	// 5  5  65 
	
	if(n1>n2 || n1>n3)
	{
		printf("%d is gretest number",n1);
	}
	else if (n2>n1 || n2>n3)
	{
		printf("%d is gretest number",n2);
	}
	else
	{
		printf("%d is gretest number",n3);
	}
}
