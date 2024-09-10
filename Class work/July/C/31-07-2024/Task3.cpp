#include<Stdio.h>

fac(int n) // Function defination 
{
	int i,fac=1;
	
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("Factorial Number : %d",fac);
}

add(int a,int b)
{
		printf("Addition is : %d",a+b);
}

sub(int a,int b)
{
	printf("Subtraction is : %d",a-b);
}


mul(int a,int b)
{	
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
			fac(5);
		}
		
		
		else if(choice==2)
		{
			add(10,20);
		}
		
		
		else if(choice==3)
		{
			sub(30,10);
		}
		
		
		else if(choice==4)
		{
			mul(5,4);
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
