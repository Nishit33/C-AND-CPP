// 29.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int minutes;
	float hours;
	
	printf("Enter Minutes : ");
	scanf("%d",&minutes);
	
	printf("\nTotal mintutes into second is : %d",minutes*60);
	printf("\nTotal mintutes into hours is : %.2f",(float)minutes/60.0);
}
