#include<stdio.h>

struct mystructure{
	char a[5];
	int i;
}s1;

main()
{
	printf("Enter Name : ");
	scanf("%s",&s1.a);
	
	for(i=0;a[i]!='\0';i++)
	{
		printf("%s",s1.a[i]);
	}
	
}
