// 16.Convert country’s name in abbreviate form

#include <stdio.h>
int main() 
{
    char countryName[100];
    int i;


    printf("Enter the country's name: ");
    gets(countryName);

    printf("%c",(countryName[0]));

    
    for (i = 1; countryName[i] != '\0'; i++) 
	{
        if (countryName[i] == ' ' && countryName[i + 1] != ' ' && countryName[i + 1] != '\0') 
		{
            printf("%c",(countryName[i + 1]));
        }
    }

    printf("\n"); 
    
}


