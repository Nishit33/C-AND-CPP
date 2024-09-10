#include<stdio.h>
main()
{
	char a[5],b[5],result[20];
	int i,j;
	
	printf("\nEnter String 1 : ");
	gets(a);
	
	printf("Enter String 2 : ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		result[i]=a[i];
	}
	
	for(j=0;b[j]!='\0';j++)
	{
		result[i+j]=b[j];
	}
	
	result[i+j]='\0';
	
	printf("\nConcat is : %s",result);
}
