// 16.Accept 5 numbers from user and perform sum of array


#include<stdio.h>
main()
{
	int num[5];
	int i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Number : ");
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum = sum+num[i];
	}
	
	printf("\nTotal sum is : %d",sum);
}
