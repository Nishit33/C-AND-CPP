// 16.Write a C program to read temperature in centigrade and display a suitable
// message according to the temperature state below:
// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot

#include<stdio.h>
main()
{
	float weather;
	
	printf("\nEnter the temperature : ");
	scanf("%f",&weather);
	
	if(weather<0)
	{
		printf("\nFreezing weather!");
	}
	else if(weather >= 0 && weather < 10)
	{
		printf("\nVery cold weather!");
	}
	else if(weather >= 10 && weather < 20)
	{
		printf("\nCold weather");
	}
	else if(weather >=20 && weather < 30)
	{
		printf("\nNoraml weather");
	}
	else if (weather >= 30 && weather < 40)
	{
		printf("\nIts hot outside");
	}
	else
	{
		printf("\nIts very hot outside!");
	}
	
}

