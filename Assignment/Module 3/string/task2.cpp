//2. Write a program in C to separate individual characters from a string.


#include<stdio.h>
main()
{
	char a[50];
	int i;
	
	printf("Enter String : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c\n",a[i]);
	}
}
