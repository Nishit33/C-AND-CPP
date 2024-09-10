#include<stdio.h>
main()
{
	int a[4];
	int i,j;
	int temt;
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Number : ");
		scanf("%d",&a[i]);
	}
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
			if(a[i]<a[j])
			{
				temt=a[i];
				a[i]=a[j];
				a[j]=temt;
			}	
			}
		}
		for(i=0;i<4;i++)
	{
		printf("\nASC Number is : %d",a[i]);
	}
	}
	
	

