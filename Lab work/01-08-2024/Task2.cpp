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
	
	printf("\nFactorial Number is : %d",fact);
}

add()
{
	int a,b;
	printf("\n\n");
	printf("\nEnter Number A : ");
	scanf("%d",&a);
	printf("Enter Number B : ");
	scanf("%d",&b);
	
	printf("\nAddition is : %d",a+b);
	
}

sub()
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
	printf("Enter Number 1 for factorial!");
	printf("\nEnter Number 2 for Addition!");
	printf("\nEnter Number 3 for Subtraction!");
	printf("\nEnter Number 4 for Multiplication!");
	printf("\nEnter Number 5 for Exit!");
	int choice;
	while(1)
	{
		printf("\n\n");
		printf("\nEnter Choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			fac();
		}
		
		else if(choice==2)
		{
			add();
		}
		
		else if(choice==3)
		{
			sub();
		}
		
		else if(choice==4)
		{
			mul();
		}
		
		else if(choice==5)
		{
			printf("\nExit Thank You");
			break;
		}
		
		else
		{
			printf("Please Enter Valid Number!");
			break;
		}
	}
}
