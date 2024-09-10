#include<stdio.h>
main()
{
	int a[4],b[4];
	int i;
	int sum=0;
	int sumb=0;
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Elements : ");
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
	}
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Elements is : %d",a[i]);
		
	}
	printf("\n\nTotal Elements Addition is : %d",sum);
	
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Elements : ");
		scanf("%d",&b[i]);
		
		sumb=sumb+b[i];
	}
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter Elements is : %d",b[i]);
	}
	printf("\n\nTotal B Elements Addition is : %d",sumb);
	printf("\n\n Addition is A and B is : %d",sum+sumb);
}
