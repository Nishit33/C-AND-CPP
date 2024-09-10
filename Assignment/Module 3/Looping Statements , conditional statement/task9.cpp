//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>
int main() 
{
    int number,sum = 0,digit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int originalNumber = number;

    
    while (number != 0) 
	{
        digit = number % 10;  
        sum += digit;         
        number /= 10;         
    }

    printf("The summation of the digits of %d is: %d\n", originalNumber, sum);
}

