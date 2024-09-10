//2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>
int main() 
{
    int choice; 
    float num1, num2; 

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice); 
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    
    switch (choice) 
	{
        case 1: 
            printf("Result: %.2f\n", num1 + num2);
            break;
            
        case 2: 
            printf("Result: %.2f\n", num1 - num2);
            break;
            
        case 3: 
            printf("Result: %.2f\n", num1 * num2);
            break;
            
        case 4: 
            
            if (num2 != 0) 
			{
                printf("Result: %.2f\n", num1 / num2);
            }
            
			else 
			{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
    }
}

