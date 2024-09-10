// 12.Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>  // using for loops
int main() 
{
    int number, originalNumber, digit, sum = 0, numDigits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;
    
    while (number != 0) 
	{
        numDigits++;
        number /= 10; 
    }

    number = originalNumber;
    
    for (int i = 0; number != 0; i++) 
	{
        digit = number % 10; 
        sum += (digit, numDigits); 
        number /= 10; 
    }
    
    if (sum == originalNumber) 
	{
        printf("%d is an Armstrong number\n", originalNumber);
    }
	else
	{
        printf("%d is not an Armstrong number\n", originalNumber);
    }
}






#include <stdio.h> // using while loop 
int main() 
{
    int number, originalNumber, digit, sum = 0, numDigits = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number; 


    int tempNumber = number;
    while (tempNumber != 0) 
	{
        numDigits++;
        tempNumber /= 10; 
    }

    number = originalNumber; 

    
    while (number != 0) 
	{
        digit = number % 10; 
        sum += pow(digit, numDigits); 
        number /= 10;
    }
    
    if (sum == originalNumber) 
	{
        printf("%d is an Armstrong number.\n", originalNumber);
    }
	else 
	{
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

}

