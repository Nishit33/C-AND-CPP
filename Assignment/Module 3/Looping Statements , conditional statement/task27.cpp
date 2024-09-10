//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>
main()
{
	int n,i;
	double sum = 0;
	
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		if(n%2==0)
		{
			sum -=(double)i / (i+1);
		}
		else
		{
			sum += (double)i / (i+1);
		}
	}
	
	printf("\nThe sum total is : %d",sum);
}
