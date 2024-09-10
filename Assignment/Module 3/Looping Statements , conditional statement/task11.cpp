// 11.Accept 5 names from user at run time.

#include<stdio.h>
main()
{
	char a[5][50];
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter Your Name : ");
		scanf("%s",&a[i]);
	}
	
	for(i=1;i<=5;i++)
	{
		printf("\n%s",a[i]);
	}
}
