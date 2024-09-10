//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>
main()
{
	int n,i=1;
	int odd=0,even=0;
	int oddcount=0,evencount=0;
	
	while(i<=5)
	{
		printf("\nEnter Number %d : ",i);
		scanf("%d",&n);
		i++;
		
		if(n%2==0)
		{
			printf("Number is even!!\n",n);
			even++;
			evencount=evencount+n;
		}
		else
		{
			printf("Number is odd!\n",n);
			odd++;
			oddcount=oddcount+n;
		}
	}
	
	printf("\nTotal Even number is : %d",even);
	printf("\nTotal Odd number is : %d",odd);
	printf("\n\nTotal Even Number Addition is : %d",evencount);
	printf("\nTotal Odd Number Addition is : %d",oddcount);
}
