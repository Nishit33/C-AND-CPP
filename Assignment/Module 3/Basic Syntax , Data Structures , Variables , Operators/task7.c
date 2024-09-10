// 7. Find area of Rectangle Formula : A=wl

#include<stdio.h>
main()
{
	float width;  // width enter
	float length; // length
	float area;  // area enter
	
	printf("Enter the width of the rectangle :  "); // width user input
	scanf("%f",&width);
	
	printf("Enter the length of the rectangle : "); // length user input
	scanf("%f",&length);
	
	area = width*length; // area multiply by width and length
	
	printf("The area of the rectangle is : %.2f",area);// total area of rectangle is 
}

