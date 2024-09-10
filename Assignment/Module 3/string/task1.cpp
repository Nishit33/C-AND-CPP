//1. Write a program in C to find the length of a string without using library functions

#include<stdio.h>
main()
{
	char a[20],i;
	int sum = 0;
	
	printf("Enter Name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		sum++;
	}
	
	printf("\nSo length of string is : %d",sum);
}
