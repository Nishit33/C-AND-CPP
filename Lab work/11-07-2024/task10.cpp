#include<stdio.h>
main()
{
	int doorcode = 1389;
	
	printf("Please Enter Door code : ");
	scanf("%d",&doorcode);
	
	if(doorcode==1389)
	{
		printf("This is correct code door open");
	}
	else
	{
		printf("This is not correct code please enter right code");
	}
}
