//13.Write a program in C to remove characters from a string except alphabets.

#include<stdio.h>
main()
{
	char a[100],result[100];
	int i,j=0;
	
	printf("\nEnter String : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		{
			result[j]=a[i];
			j++;
		}
	}
	result[j]='\0';
	
	printf("\nAfter string : %s",result);
}
