// 9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

main() 
{
    char a[100];
    int i, length = 0;


    printf("Enter a string: ");
    gets(a);


    for (i = 0; a[i] != '\0'; i++) 
	{
        length++;
    }

    
    printf("\nThe length of the string is: %d", length);

}

