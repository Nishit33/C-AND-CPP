// 14.Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>
int factorial(int n) 
{
    int result = 1;
    for (int i = 1; i <= n; i++) 
	{
    	result *= i;
    }
    return result;
}

int main() 
{
    int numbers[5]; 

    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter Number : ");
        scanf("%d", &numbers[i]);
    }

    
    printf("\n\n");
    for (int i = 0; i < 5; i++) 
	{
    
        if (numbers[i] < 0) 
		{
            printf("Factorial of %d is not defined for negative numbers.\n", numbers[i]);
        }
		else
		{
            printf("Factorial of %d is %d\n", numbers[i], factorial(numbers[i]));
        }
    }

}

