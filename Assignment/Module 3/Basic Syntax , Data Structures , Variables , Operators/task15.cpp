// 15.Convert school’s name in abbreviated form

#include <stdio.h> 
int main() 
{
    char schoolName[100];
    int i;


    printf("Enter the school's name: ");
    gets(schoolName); 

    
    printf("%c", (schoolName[0]));

    
    for (i = 1; schoolName[i] != '\0'; i++) 
	{
    
        if (schoolName[i] == ' ' && schoolName[i + 1] != ' ' && schoolName[i + 1] != '\0') 
		{
            printf("%c",(schoolName[i + 1]));
        }
    }

    printf("\n"); 

}

