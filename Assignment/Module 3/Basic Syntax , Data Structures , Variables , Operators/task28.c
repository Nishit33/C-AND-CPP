//28.Convert years into days and months

#include<stdio.h>
main()
{
	int years; // day 
	
	printf("\nEnter year : "); // user input year
	scanf("%d",&years);
	
	printf("\nTotal Years into months is : %d",years*12); // multiply by 12
	printf("\nTotal Years into days is : %d",years*365); // 365 days * years
}
