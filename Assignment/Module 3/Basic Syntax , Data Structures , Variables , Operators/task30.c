// 30.WAP to convert years into days and days into years

#include<Stdio.h>
main()
{
	int years;  // years
     	
	printf("Enter Year : "); // user input
	scanf("%d",&years);
	
	printf("Years into days is : %d\n",years*365); // years*365
	
	float days; // days
	
	
	printf("Enter days : ");  
	scanf("%f",&days);
	
	years = days/365;
	
	printf("days into years is : %.2f",(float)years,days); // years,days convert to year 
}
