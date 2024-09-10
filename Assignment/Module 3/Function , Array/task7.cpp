//7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
main()
{
	char a[20],i;
	int sum = 0;
	
	printf("\nEnter Name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		sum++;
	}
	
	printf("\nSo length of string is : %d",sum);
}
