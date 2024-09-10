//7. Write a program in C to copy one string to another string

#include<stdio.h>
#include<string.h>
main()
{
	char a[8],b[8];
	int i;
	
	printf("Enter first Name : ");
	gets(a);
	
	printf("\nEnter second name : ");
	gets(b);
	
	strcpy(a,b);
	
	printf("\nCopy string is : %s",b);
}
