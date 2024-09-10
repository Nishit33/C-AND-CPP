#include<stdio.h>
main()
{
	int n1=0,n2=1,n,i;  // fibonacci series task 
	
	printf("Enter Terms : ");  // enter number user input
	scanf("%d",&n);
	
	printf("%d",n1);   // number 1
	printf("\n%d",n2); // number 2
	
	for(i=3;i<=n;i++)  // loop for fibonacii start with 3 because we already saw 2 digit above number 
	{
		int n3=n1+n2; // n3 is n1 + n2 = n3 find 
		printf("\n%d",n3); // then print n3
		n1=n2; // n1 swap is n2
		n2=n3; // n2 swap is n3 
	}
}
