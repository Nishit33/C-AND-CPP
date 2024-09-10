// 14.Perform 2D matrix array


#include<stdio.h>
main()
{
	int a[2][3],b[2][3];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Number [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Number [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	
	
}
