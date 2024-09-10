//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//                                                            and without using 3rd variable

/*

#include<stdio.h>
main()
{
	int a,b,temt;  // using 3rd variable
	
	printf("\nEnter Number A : ");  // user input number a
	scanf("%d",&a);
	
	printf("\nEnter Number B : "); // user input number b 
	scanf("%d",&b);
	
	temt = a;
	a = b;
	b = temt;
	
	printf("\nAfter Swapping Value A is : %d",a);
	printf("\nAfter Swapping Value B is : %d",b);
}
*/
     
#include<stdio.h>
main()
{
	int a,b;     // without using 3rd variable
	
	printf("Enter Number A : ");   // user input value a
	scanf("%d",&a);
	
	printf("Enter Number B : ");  // user input value b
	scanf("%d",&b);
	
	a = a+b; 
	b = a-b;
	a = a-b;
	
	printf("\nAfter Swapping Value A is : %d",a);
	printf("\nAfter Swapping Value B is : %d",b);
	
}








