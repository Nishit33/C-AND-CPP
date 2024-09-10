// 26. Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	float fahrenheit , celsius; //fahrenheit , celsius 
	
	printf("Enter temperature in fahrenheit : ");
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9; // this is sum define celsius 
	
	printf("Total celsuis is : %.2f",celsius); // total celsius 
}
