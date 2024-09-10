//12.Write a program in C to find the number of times a given word 'is' appears in the given string

#include<stdio.h>
main()
{
	char a[200];
	int i,sum=0;
	
	printf("\nEnter Sentence : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i] =='i' && a[i+1]=='s'))
		{
			sum++;
		}
	}
	printf("\nHow many time is total : %d",sum);
}

