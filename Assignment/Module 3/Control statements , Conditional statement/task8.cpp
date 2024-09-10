//8.WAP to accept the height of a person in centimeters and categorize the
//                                                            person according to their height.

#include<stdio.h>
main()
{
	int height;
	
	printf("\nEnter Your Height In Centimeters : ");
	scanf("%d",&height);
	
	if(height<150)
	{
		printf("\nYou Are categorize short");
	}
	
	else if(height<=170)
	{
		printf("\nYou Are categorize Average");
	}
	else
	{
		printf("\nYou Are categorize Tall");
	}
	
}
