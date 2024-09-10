// 18.Write a C Program to Print the Multiplication Table of N

#include<stdio.h>
main()
{
	int i,n,k;
	
	printf("Enter Table Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		k=n*i;
		printf("\n%d X %d = %d",n,i,k);
	}
}
