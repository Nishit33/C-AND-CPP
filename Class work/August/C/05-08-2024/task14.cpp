//14.Write a program in C to combine two strings manually


#include<stdio.h>
#include<string.h>
main()
{
	char a[15],b[15];
	int i,j;
	
	printf("\nEnter first name : ");
	gets(a);
	
	printf("\nEnter second name : ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++);
	
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];	
		i++;	
	}
	
	
	printf("%s",a);
}
