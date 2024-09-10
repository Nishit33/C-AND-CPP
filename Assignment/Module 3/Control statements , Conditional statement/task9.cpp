// 9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<Stdio.h>
main()
{
	char n;
	
	printf("Enter Character : ");
	scanf("%c",&n);
	
	 if(n >= 'A' && n <= 'Z')
	 {
	 	printf("\nThe character is uppercase!");
	 }
	 
	 else if(n >= 'a' && n <= 'z')
	 {
	 	printf("\nThe character is lowercase");
	 }
	 
	 else if(n >= '0' && n <= '9')
	 {
	 	printf("\nThe character is digit number!");
	 }
	 
	 else
	 {
	 	printf("\nThe character is special character");
	 }
}

