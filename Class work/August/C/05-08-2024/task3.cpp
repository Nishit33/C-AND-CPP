#include<stdio.h>
#include<string.h>
main()
{
	char a[5],b[5];  // string two value 
	
	printf("Enter string 1 : ");
	gets(a);
	printf("Enter string 2 : ");
	gets(b);
	
	printf("string concat is : %s",strcat(a,b));
	
}
