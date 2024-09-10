// 27.Convert days into months

#include<stdio.h>
main()
{
	int days,month,total;
	
	printf("Enter Day : ");
	scanf("%d",&days);
	
	month = days/30;
	total = days%30;
	
	printf("\nTotal day into months is : %d",month,total);
	
}
