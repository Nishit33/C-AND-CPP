// 10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include <stdio.h>
int main() 
{
    int number, firstDigit, lastDigit;


    printf("Enter a number: ");
    scanf("%d", &number);


    lastDigit = number % 10;


    while (number >= 10) 
	{
        number /= 10;
    }
    firstDigit = number;

    
    int sum = firstDigit + lastDigit;

    printf("The summation of the first and last digit is: %d\n", sum);
    
}

