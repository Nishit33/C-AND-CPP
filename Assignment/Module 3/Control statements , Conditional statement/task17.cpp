//17.Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<Stdio.h>
main()
{
	int angle1,angle2,angle3;
	
	printf("\nEnter the one Angles : ");
	scanf("%d",&angle1);
	
	printf("\nEnter the two Angles : ");
	scanf("%d",&angle2);
	
	printf("\nEnter the Three Angles : ");
	scanf("%d",&angle3);
	
	
	if(angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1+angle2+angle3==180))
    {
	    printf("\nThe Angles can form a triangle");
    }
    
    else
    {
    	printf("\nThe Angles cannot form a triangle");
	}
}
