// 9. Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
main()
{
	float side1,side2,side3; // three side triangle
	float perimeter; // perimeter
	
	printf("Enter the length of the three side of triangle!\n"); 
	printf("side 1 : "); // enter side 1
	scanf("%f",&side1);
	
	printf("side 2 : "); // side 2
	scanf("%f",&side2);
	
	printf("side 3 : "); // side 3
	scanf("%f",&side3);
	
	perimeter = side1 + side2 + side3; // formula as show upside is triangle = a + b + c 
	
	printf("So circumference of the triangle is : %.2f",perimeter); // total circumference 
}
