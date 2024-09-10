// 15.Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
main()
{
	int a[5];
	int i,j,temt;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Number : ");
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temt=a[i];
				a[i]=a[j];
				a[j]=temt;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\nASC number is : %d",a[i]);
	}
	
}
