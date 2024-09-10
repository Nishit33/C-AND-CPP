//6. Find the Character Is Vowel or Not


#include<stdio.h>
main()
{
	char n;
	
	printf("\nEnter Character : ");
	scanf("%c",&n);
	
	switch(n)
	{
		case'A':
			printf("%c is vowels",n);
			break;
			
		case'a':
			printf("%c is vowels",n);
			break;	
			
		case'E':
			printf("%c is vowels",n);
			break;
		
		case'e':
			printf("%c is vowels",n);
			break;	
			
		case'I':
			printf("%c is vowels",n);
			break;
			
		case'i':
			printf("%c is vowels",n);
			break;	
			
		case'O':
			printf("%c is vowels",n);
			break;
			
		case'o':
			printf("%c is vowels",n);
			break;	
			
		case'U':
			printf("%c is vowels",n);
			break;
			
		case'u':
			printf("%c is vowels",n);
			break;		
			
		default:
		{
			printf("%c is not vowels",n);
						}				
	}
	
	
}
