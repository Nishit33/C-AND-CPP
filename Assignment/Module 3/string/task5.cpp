//5. Write a program in C to compare two strings without using string library functions

#include<stdio.h>
#include<string.h>
main()
{
	char a[5],b[5];
	
	printf("Enter First string : ");
	gets(a);
	
	printf("\nEnter Second string : ");
	gets(b);
	
	int n = strcmp(a,b);
	
	printf("\nComparision : %d",n);
}
