#include<stdio.h>
main()
{
	
	FILE* fptr;
	
	fptr = fopen("test1.txt","r");   // read file 
	
	char a[100];
	
	fgets(a,100,fptr);
	
	printf("%s",a);
}
