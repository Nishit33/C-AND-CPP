// 4. WAP to print table up to given numbers


#include<stdio.h>
main()
{
	int n,i,k;  
	printf("Enter Number : "); // user input number 
	scanf("%d",&n);
	
	for(i=1;i<=10;i++) // using for condition to reach 10 number 
	{
		k=n*i; // k is new int and n is input multiply by i 
	    printf("\n%d x %d = %d",n,i,k);	// print table 
	}
	
}
