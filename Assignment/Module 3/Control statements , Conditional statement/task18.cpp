//18.Write a C program to calculate profit and loss on a transaction.

#include<Stdio.h>
main()
{
	float buyprice,sellprice;
	float profit,loss;
	
	printf("\nEnter buy price : ");
	scanf("%f",&buyprice);
	
	printf("\nEnter sell price : ");
	scanf("%f",&sellprice);
	
	if(sellprice>buyprice)
	{
		profit = sellprice - buyprice;
		printf("\nProfit : %.2f",profit);
	}
	
	else if(buyprice>sellprice)
	{
		loss = buyprice - sellprice;
		printf("\nLoss : %.2f",loss);
	}
	
	else
	{
		printf("\nNo profit / No loss !!!");
	}
}
