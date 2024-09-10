#include<stdio.h>
main()
{
	int i=1;  // while loop triangle
	
	while(i<=5)
	{
		
		int k=1;
		while(k<=5-i)
		{
			printf(" ");
			k++;
		}
		int j=1;
		while(j<=i)
		{
			printf(" *");
			j++;
		}
		i++;
		printf("\n");
	}
}
