//22. Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>
int isPalindrome(int num) {
    int original = num;  
    int reversed = 0;    
    int remainder;

    while (num != 0) 
	{
        remainder = num % 10;      
        reversed = reversed * 10 + remainder; 
        num /= 10;                 
    }

    return (reversed == original);
}

int main() 
{
    int numbers[3]; 
    int count = 0;  

    while (count < 3) 
	{
        printf("Enter Number : ");
        scanf("%d", &numbers[count]);  
        count++;  
    }

    
    printf("\n\n");
    
    for (int i = 0; i < 3; i++) 
	{
        if (isPalindrome(numbers[i])) 
		{
            printf("%d is a palindrome\n", numbers[i]);
        }
		else 
		{
            printf("%d is not a palindrome\n", numbers[i]);
        }
    }
}

