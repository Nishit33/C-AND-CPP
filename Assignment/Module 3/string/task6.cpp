//6. Wpa in C to count the total number of alphabets, digits and special characters in a string

#include <stdio.h>

main()
{
    char a[50];
    int alphabets = 0, digits = 0, specialCharacters = 0;
    int i;

    
    printf("Enter a string: ");
    gets(a);

    
    for (i = 0; a[i] != '\0'; i++) 
	{
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) 
		{
            alphabets++;
        }
		 
		else if (a[i] >= '0' && a[i] <= '9') 
		{
            digits++;
        } 
		
		else 
		{
            specialCharacters++;
        }
    }

    
    printf("\nTotal number of alphabets: %d\n", alphabets);
    printf("\nTotal number of digits: %d\n", digits);
    printf("\nTotal number of special characters: %d\n", specialCharacters);

}




