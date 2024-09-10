//4. Find Area of Square formula : a = a2

#include<stdio.h>
main()
{
	float side;  // side 
	float area;  // area
	
	printf("Enter length of side : ");  // user input side
	scanf("%f",&side);
	
	area = side*side;         // area 3*3 = 9
	
	printf("Total area square is : %.2f",area);  // square value 
}
