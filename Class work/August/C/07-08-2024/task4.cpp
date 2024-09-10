#include<stdio.h>
main()
{
	FILE* fptr;
	
	fptr = fopen("test1.txt","a");  // append method
	fprintf(fptr,"\nHello Welcome to Doctor Doom!!");
	fclose(fptr);
}


