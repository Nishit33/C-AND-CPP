//4. Write a program in C to count the total number of words in a string.

#include<stdio.h>
main()
{
	char a[50];
	int i;
	int sum=0;
	
	printf("Enter Name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)	
	{
		sum=sum+i;
	}
	
	printf("\nTotal number of word in string is : %d",sum);
	
	
}
