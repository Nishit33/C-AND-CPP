//control statments
// 1 break;
// 2 continue;
// 3 goto

#include<stdio.h>
main()
{
	int n,i;
	
	for(i=1;i<=10;i++)  // break statment 
	{
		printf("%d\n",i);
		if(i==5)
		{
			break;
		}
	}
}

