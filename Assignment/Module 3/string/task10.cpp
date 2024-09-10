// 10.Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
main()
{
	char a[50],sub[50];
	int i,start,length;
	
	printf("\nEnter String : ");
	gets(a);
	
	a[strcspn(a, "\n")] = '\0';
	
	printf("\nEnter starting string : ");
	scanf("%d",&start);
	
	printf("\nEnter Length of string : ");
	scanf("%d",&length);
	
	for(i=0; i<length && a[start + i]!='\0';i++)
	{
		sub[i]=a[start+i];
	}
	
	sub[i]='\0';
	
	printf("Substring: %s", sub);
}
