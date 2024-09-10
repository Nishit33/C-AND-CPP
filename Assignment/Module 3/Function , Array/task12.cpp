// 12.WAP to accept 5 students name and store it in array

#include<stdio.h>
main()
{
	char a[5][20];
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("\nEnter Name %d : ",i);
		scanf("%s",&a[i]);
	}
	printf("\n\n");
	for(i=1;i<=5;i++)
	{
		printf("\nstudent %d : %s",i,a[i]);
	}
}



