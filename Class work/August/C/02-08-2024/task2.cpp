#include<stdio.h>

fac(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)  //4)FUNCTION WITH PARAMETER AND WITH RETURN TYPE
	{
		fact*=i;
		
	}
	return fact;
}

main()
{
	printf("%d",fac(5));
}
