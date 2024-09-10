//15.Write a program in C to find the largest and smallest words in a string

#include<stdio.h>
#include<string.h>
main()
{
	char a[200],word[50];
	int i=0,j=0,minLen,mxLen;
	char smallest[50],largest[50];
	
	printf("\nEnter sentence : ");
	gets(a);
	
	minLen=9999;
	mxLen = 0;
	
	a[strcspn(a, "\n")] = ' ';
    a[strlen(a) + 1] = '\0';
	
	for (i = 0; a[i] != '\0'; i++) 
	{
        if (a[i] != ' ') 
		{
            word[j++] = a[i];
        }
        
		else 
		{
            word[j] = '\0'; 
            j = 0; 
            
            int len = strlen(word);
            if (len > 0) 
			{ 
                if (len < minLen) 
				{
                    minLen = len;
                    strcpy(smallest, word);
                }
                
                if (len > mxLen) 
				{
                    mxLen = len;
                    strcpy(largest, word);
                }
            }
        }
    }

    
    printf("The smallest word is: %s\n", smallest);
    printf("The largest word is: %s\n", largest);
}

