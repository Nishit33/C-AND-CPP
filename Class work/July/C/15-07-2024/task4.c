#include<stdio.h>
main()
{
	int i,number;
	
	printf("Enter Number : ");
	scanf("%d",&number);
	
	for(i=number;i>=1;i--)
	{
		printf("%d\n",i);
	}
}
