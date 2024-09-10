// 33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	int n,k1,k2,k3;
	
	printf("Enter Number an integer : "); // user input integer
	scanf("%d",&n);
	
	k1 = n;
	k2 = n * n;   // calculate all three powers of integer
	k3 = n * n * n;
	
	printf("\nThe first three powers of : %d",n); 
	
	printf("\n%d^1 = %d",n,k1);
	printf("\n%d^2 = %d",n,k2);
	printf("\n%d^3 = %d",n,k3);
}
