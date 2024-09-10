// 11..Find circumference of square formula : C = 4 * a

#include<stdio.h>
main()
{
	int side,circumference; // side and circumference 
	
	printf("Enter the side length of the square : "); // user input side length 
	scanf("%d",&side);
	
	circumference = 4*side; // formula is 4 * side
	
	printf("So the circumference square is : %d",circumference);// total square 
}
