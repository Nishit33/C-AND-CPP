// 3. WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	
	printf("Enter Year : "); // ask year userinput
	scanf("%d",&year);
	
	if(year%4==0) // if condition 
	{
		printf("This is leap year !");
	}
	else // else condition 
	{
		printf("This is not leap year !");
	}
}

