//6. Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
main()
{
	float base;  // base
	float height; // height
	float area;   // area
	
	printf("Enter the base of the triangle : ");  // base of triangl user input
	scanf("%f",&base);
	
	printf("Enter the height of the triangle : "); // height of triangle user input
	scanf("%f",&height);
	
	area = 0.5*base * height;  // 1/2 multiply base * height
	
	printf("The area of the triangle is : %.2f",area);  // area of triangle 
}
