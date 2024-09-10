//3. Write a program in C to print individual characters of a string in reverse order


#include<stdio.h>
main()
{
	char a[50];
	int i,length;
	
	printf("Enter String : ");
	gets(a);
	
	while(a[length]!='\0')
	{
		length++;
	}
	
	for(i=length-1;i>=0;i--)
	{
		printf("%c\n",a[i]);
	}
}
