#include<stdio.h>
main()
{
	int n,i=0,odd=0,even=0,oddcount=0,evencount=0;
	
	while(i<=5)
	{
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\nNumber is even!\n");
		even++;
		evencount=evencount+n;
	}
	else
	{
		printf("\nNumber is odd\n");
		odd++;
		oddcount=oddcount+n;
	}
	i++;
	}
	printf("\nSum of even is %d",even);
	printf("\nSum of odd is %d",odd);
	printf("\nTotal evencount is %d",evencount);
    printf("\nTotal oddcount is %d",oddcount);	
	
}
