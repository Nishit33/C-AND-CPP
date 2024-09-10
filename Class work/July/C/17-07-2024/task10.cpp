#include<stdio.h>
main()
{
	int i;
	
	for(i=1;i<=10;i++) // continue statment 
	{
		
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
