#include<stdio.h>

fac()
{
	int n,i,fact=1;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	printf("Factorial Number is : %d",fact);
}

addition()
{
	int a,b;
    printf("\n\n");	
	printf("\nEnter Number A : ");
	scanf("%d",&a);
	
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	printf("\nAddition is : %d",a+b);
}

subtraction()
{
	int a,b;
	printf("\n\n");
	printf("\nEnter Number A : ");
	scanf("%d",&a);
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	printf("\nSubtraction is : %d",a-b);
	
}

mul()
{
	int a,b;
	printf("\n\n");
	
	printf("\nEnter Number A : ");
	scanf("%d",&a);
	
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	printf("\nMultiplication is : %d",a*b);
}
main()
{
	fac();
	addition();
	subtraction();
	mul();
}
