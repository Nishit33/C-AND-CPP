#include<stdio.h>

main()
{
	int year;   //  Leap year how to calculate 
	
	printf("Please Enter Year : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("This is leap year");
	}
	else
	{
		printf("This is not leap year");
	}
}
