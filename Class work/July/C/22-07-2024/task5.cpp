#include<Stdio.h>
main()
{
	int a[4],b[4];
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Number : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Eliments is : %d",a[i]);
	}
	
	
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Number : ");
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Eliments is : %d",b[i]);
	}
	
	
	for(i=0;i<4;i++)
	{
		printf("\nAddition is : %d",a[i]+b[i]);
	}
	
}
