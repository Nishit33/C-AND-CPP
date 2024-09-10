// 31.Convert kilometers into meters

#include<stdio.h>
main()
{
	int km,meters; // km , meters
	
	printf("Enter Km : "); // kilometers user input
	scanf("%d",&km);
	
	meters = km * 1000; 
	
	printf("Total Meters is : %d",meters); // Total meters 
}
