// FILE OPEN WRITE READ UPDATE CLOSE

#include<stdio.h>
main()
{
	FILE* fptr;
	
	fptr = fopen("test1.txt","w");  // write content
	fprintf(fptr,"Hello Welcome to Marvel!!");
	fclose(fptr);
}


