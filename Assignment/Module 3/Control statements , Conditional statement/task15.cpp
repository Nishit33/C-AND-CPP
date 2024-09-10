//15.Write a C program to determine eligibility for admission to a professional
//                                                  course based on the following criteria

#include<Stdio.h>
main()
{
	int maths,chemistry,physics;
	
	printf("Enter Your Marks Maths : ");
	scanf("%d",&maths);
	
	printf("Enter Your Marks chemistry : ");
	scanf("%d",&chemistry);
	
	printf("Enter Your Marks physics : ");
	scanf("%d",&physics);
	
	
	if(maths >= 65 && physics >= 55 && chemistry >= 50 )
	{
		printf("\nThe student is eligible");
	}
	else
	{
		printf("\nThe student is not eligible!");
	}
}
