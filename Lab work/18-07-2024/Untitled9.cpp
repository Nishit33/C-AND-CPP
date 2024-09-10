#include<stdio.h>
main()
{
	int i;   // continue task in for loop 
	
	for(i=1;i<=10;i++)
	{
		
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
