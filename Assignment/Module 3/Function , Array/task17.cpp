//17.WAP to show difference between Structure and Union.


#include<stdio.h>

struct mystruct{  // so struct is only one variable s1 that will be easy for us
	int a,b;   // int show 
}s1;


union myunion{    // so union use every new variable for each int and that will be difficult
	int a;      // int a
	int b; 		// int b
}d1,d2;   	

main()
{
	printf("\nEnter Number A : ");  // This is struct
	scanf("%d",&s1.a);
	
	printf("\nEnter Number B : ");
	scanf("%d",&s1.b);
	
	printf("\nAddition is : %d\n\n",s1.a+s1.b);
	
	
	
	
	printf("Enter Number A : ");  // This is union 
	scanf("%d",&d1.a);
	
	printf("\nEnter Number B : ");
	scanf("%d",&d2.b);
	
	printf("\nAddition is : %d",d1.a+d2.b);
	
}
