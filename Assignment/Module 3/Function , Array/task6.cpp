//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int a[2][3],b[2][3];
	int i,j;
	
	printf("\n***************************First Array***************************\n");
	
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
	
	printf("\n***************************Second Array***************************\n");
	
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
	
	printf("\n***************************Addition***************************\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n***************************Subtraction***************************\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n***************************Multiplication**************************\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]*b[i][j]);
		}
		printf("\n");
	}
}
