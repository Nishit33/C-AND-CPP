#include<stdio.h>
main()
{
	char n;
	
	printf("Enter Number : ");
	scanf("%c",&n);
	
	switch(n)
	{
		case 'A':
			printf("%c is a vowels!",n);
			break;
		case 'E':
			printf("%c is a vowels!",n);
			break;
		case 'I':
			printf("%c is a vowels!",n);
			break;
		case 'O':
			printf("%c is a vowels!",n);
			break;
		case 'U':
			printf("%c is a vowels!",n);
			break;				
		default:
			{
			printf("%c is consonants",n);
		}
		
		
				
	}
}
