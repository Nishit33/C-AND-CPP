//8. Write a program in C to count the total number of vowels or consonants in a string.


#include <stdio.h>

main() 
{
    char a[100];
    int i, vowels = 0, consonants = 0;


    printf("Enter a string: ");
    gets(a);


    for (i = 0; a[i] != '\0'; i++) 
	{
        
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
            a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') 
		{
            vowels++;
        }
        
        else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) 
		{
            consonants++;
        }
    }

    
    printf("\nTotal number of vowels: %d", vowels);
    printf("\nTotal number of consonants: %d", consonants);

}

