#include<stdio.h>

main()
{
	int n;
	
	printf("Enter A Number : ");
	scanf("%d",&n);
	
   if(n==0)
   {
   	printf("This is Zero Number!");
   }
	else if(n%2==0)
	{
		printf("This is even Number");
	}
	
	else
	{
		printf("This is Odd Number!");
	}
}
