#include<stdio.h>
#include<string.h>
main()
{
	char a[5],b[5],i,j;
	int sum=0,sum1=0;       
	
	printf("Enter String 1 : ");
	gets(a);
	printf("Enter String 2 : ");
	gets(b);
	
	
	for(i=0;a[i]!='\0';i++)
	{
		sum=sum+a[i];
	}
	
	for(j=0;b[j]!='\0';j++)
	{
		sum1=sum1+b[j];
	}
	
	printf("\nString 1 : %d",sum);
	printf("\nstring 2 : %d",sum1);
	
	int n = strcmp(a,b);
	printf("\nString Comparision is : %d",n);
}
