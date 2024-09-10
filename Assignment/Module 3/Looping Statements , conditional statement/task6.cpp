//6. WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int n1=0,n2=1,n,i,n3; // int 
	
	printf("Enter Number : "); // user input number 
	scanf("%d",&n);
	
	printf("%d",n1); // print n1
	printf("\n%d",n2); // print n2
	
	for(i=3;i<=n;i++) // using for loop start with 3 because we alredy show n1 and n2 
	{
		n3=n1+n2; // n3 is n1 + n2 = n3
		n1=n2; // n1 = n2
		n2=n3; // n2 = n3
		printf("\n%d",n3); // print n3
	}

}
