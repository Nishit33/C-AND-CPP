#include<Stdio.h>

fac() // Function defination 
{
	int n,i,fac=1;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("Factorial Number : %d",fac);
}

add()
{
	int a,b;
	
	printf("\nEnter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("Addition is : %d",a+b);
}

sub()
{
	int a,b;
	
	printf("\nEnter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("Subtraction is : %d",a-b);
}

mul()
{
	int a,b;
	
	printf("\nEnter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("Multiplication is : %d",a*b);
}



main()
{
	
	printf("\nEnter 1 for Fact!!");
	printf("\nEnter 2 for Addition");
	printf("\nEnter 3 for substraction");
	printf("\nEnter 4 for Multiplication");
	printf("\nEnter 5 for exit!");
	int choice;
	
	while(1)
	{
		printf("\n\nEnter Choice : ");
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
			printf("\nExit");
			break;
		}
		
		
		else
		{
			printf("\nInvalid number!");
			break;
		}
		
	}
}
