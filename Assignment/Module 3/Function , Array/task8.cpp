// 8. WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee that provides the following

#include <stdio.h>
#include <string.h>

main() 
{
    char str[100], reversed[100];
    int length, i, palindrome = 1;


    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for (i = 0; i < length; i++) 
	{
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';

    
    for (i = 0; i < length; i++) 
	{
        if (str[i] != reversed[i]) 
		{
            palindrome = 0;
            break;
        }
    }

    
    printf("\nReversed string: %s\n", reversed);
    if (palindrome) 
	{
        printf("\nPalindrome");
    }
    
	else 
	{
        printf("\nNot a palindrome");
    }
}






//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage


//#include <stdio.h>
//struct Employee 
//{
//    int empno;
//    char empname[100];
//    char address[200];
//    int age;
//};
//
//main() 
//{
//    struct Employee s1[5];
//    int i;
//
//
//    for (i = 0; i < 5; i++) 
//	{
//        printf("\nEnter information for employee %d\n", i + 1);
//        
//        printf("Enter employee number: ");
//        scanf("%d", &s1[i].empno);
//        
//        printf("Enter employee name: ");
//        scanf("%s", &s1[i].empname);
//        
//        printf("Enter employee address: ");
//        scanf("%s", &s1[i].address);
//        
//        printf("Enter employee age: ");
//        scanf("%d", &s1[i].age);
//    }
//
//    
//    printf("\nEmployee Information:\n");
//    
//    for (i = 0; i < 5; i++) 
//	{
//        printf("\nEmployee %d\n", i + 1);
//        printf("Employee Number: %d\n", s1[i].empno);
//        printf("Employee Name: %s\n", s1[i].empname);
//        printf("Employee Address: %s\n", s1[i].address);
//        printf("Employee Age: %d\n", s1[i].age);
//    }  
//}

