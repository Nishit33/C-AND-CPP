//10.WAP to perform Palindrome number using for loop and function


#include <stdio.h>

main() 
{
    int number, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;


    for (; number != 0; number /= 10) 
	{
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed) 
		{
        	printf("palindrome");
    	}
    
	else 
	{
        printf("not a palindrome");
    }

}

