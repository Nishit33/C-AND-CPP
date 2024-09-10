#include <stdio.h>

menu() 	// This is menu function 
{     
    printf("****************Menu****************");
    printf("\n1 Pizza        Price = 180rs/pcs");
    printf("\n2 Burger       Price = 100rs/pcs");
    printf("\n3 Dosa         Price = 120rs/pcs");
    printf("\n4 Idli         Price = 50rs/pcs");
}

pizza (int totalAmount) 		 // This is pizza function
{  
    int n;

    printf("\nPlease select Quantity: ");   // Ask quantity ? 
    scanf("%d", &n);
    totalAmount = totalAmount + 180 * n;   
    printf("Amount: %d", 180 * n);        
    return totalAmount;
}

burger(int totalAmount)         // This is burger function
{
    int n;

    printf("\nPlease select Quantity: ");  // Ask quantity ? 
    scanf("%d", &n);
    totalAmount = totalAmount + 100 * n;
    printf("Amount: %d", 100 * n);
    return totalAmount;
}

dosa(int totalAmount)          // This is dosa function
{
    int n;

    printf("\nPlease select Quantity: ");  // Ask quantity ? 
    scanf("%d", &n);
    totalAmount = totalAmount + 120 * n;
    printf("Amount: %d", 120 * n);
    return totalAmount;
}

idli(int totalAmount)      // This is idli function
{
    int n;

    printf("\nPlease select Quantity: ");   // Ask quantity ? 
    scanf("%d", &n);
    totalAmount = totalAmount + 50 * n;
    printf("Amount: %d", 50 * n);
    return totalAmount;
}

main() 
{
    int totalAmount = 0;
    int choice;
    char order;

    while (1) 
	{        					
        printf("\n\n");
        menu();
        printf("\n\nEnter your choice: ");  // choice enter 
        scanf("%d", &choice);

        if (choice == 1)                // if choice number 1 
		{
            printf("You have selected pizza\n");
            totalAmount = pizza(totalAmount);    
        }
        
		else if (choice == 2)               // if choice number 2 
		{
            printf("You have selected burger\n");
            totalAmount = burger(totalAmount);
        }
		 
		else if (choice == 3)               // if choice number 3 
		{
            printf("You have selected dosa\n");
            totalAmount = dosa(totalAmount);
        }
		 
		else if (choice == 4)               // if choice number 4 
		{
            printf("You have selected idli\n");
            totalAmount = idli(totalAmount);
        }
		 
		else                              // else enter correct number
		{
            printf("Please select valid Number!\n");
        }

        printf("\nDo you want to place more orders y | n : ");   // more order yes or no
        scanf(" %c", &order);
        
        if (order != 'y' && order != 'Y')         // if y and Y so continue order otherwise break
		{
            break;
        }
    }

    printf("\nTotal Amount Bill: %d", totalAmount);
}

