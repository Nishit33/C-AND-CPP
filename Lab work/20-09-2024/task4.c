#include<stdio.h>
main()
{
	int a[5],i,temt,j;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temt=a[i];
				a[i]=a[j];
				a[j]=temt;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nAsc Number is : %d",a[i]);
	}
	
}
