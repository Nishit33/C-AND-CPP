// 5. Find Area of Cube formula : a = 6a2


#include<stdio.h>
main()
{
	float side;  // side 
	float surfaceArea;  // surfacearea  
	
	printf("Enter the side length of the cube : ");  // side length cube
	scanf("%f",&side);
	
	surfaceArea = 6*side*side;    // cube side 6 (up,down ,4side)
	
	printf("The surfaceArea cube is : %.2f",surfaceArea); // total surfacearea 
}
