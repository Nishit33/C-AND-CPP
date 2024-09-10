// 19.Write a program in C to calculate and print the electricity bill of a given customer. 
//  The customer ID, name, and unit consumed by the user should be
//   captured from the keyboard to display the total amount to be paid to the customer. 

#include<Stdio.h>
main()
{
	int customerID;
	char name[25];
	float units,IntialAmount,totalAmount;
	const float MINIMUM_BILL = 256.00;
	const float SURCHARGE_RATE = 0.18;
	
	printf("\nEnter Customer id : ");
	scanf("%d",&customerID);
	
	printf("\nEnter Customer Name : ");
	scanf("%s",&name);
	
	printf("\nEnter Unit consumed : ");
	scanf("%f",&units);
	
	if(units<=350)
	{
		totalAmount = units*1.20;
	}
	
	else if(units > 350 && units < 600)
	{
		totalAmount = units * 1.50;
	}
	
	else if (units >= 600 && units < 800)
	{
		totalAmount = units * 1.80;
	}
	
	else
	{
		IntialAmount = units * 2.00;
	}
	
	if(IntialAmount > 800)
	{
		totalAmount = IntialAmount + (IntialAmount * SURCHARGE_RATE);
	}
	else
	{
		 totalAmount = IntialAmount;
	}
	
	
	if (totalAmount < MINIMUM_BILL) 
	{
	
        totalAmount = MINIMUM_BILL;
    }
	
	printf("\n\nElectricity Bill\n\n");
	printf("Customer Id : %d\n",customerID);
	printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount: %.2f\n", totalAmount);
	
}

