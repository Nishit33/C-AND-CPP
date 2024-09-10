#include<stdio.h>
#include<string.h>
main()
{
	char a[5],b[5];      // string comparision 
	
	printf("Enter String 1 : ");
	gets(a);
	printf("Enter String 2 : ");
	gets(b);
	
	int n = strcmp(a,b);
	
	printf("Comparision : %d",n);
}
