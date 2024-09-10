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
	printf("\nFactorial Number : %d",fac);
}

add()
{
	int a,b;
	
	printf("\nEnter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("\nAddition is : %d",a+b);
}

sub()
{
	int a,b;
	
	printf("\nEnter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("\nSubtraction is : %d",a-b);
}

mul()
{
	int a,b;
	
	printf("\nEnter Number : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	printf("\nMultiplication is : %d",a*b);
}



main()
{
	fac(); // Function calling
	add();
	sub();
	mul();
}
