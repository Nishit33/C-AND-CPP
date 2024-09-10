//37. WAP to show
//    i. Monday to Sunday using switch case
//   ii. Vowel or Consonant using switch case  ( Down Side  ) 




//    i. Monday to Sunday using switch case
#include<stdio.h>
main()
{
	int days;
	
	printf("\nEnter Days : ");
	scanf("%d",&days);
	
	switch(days)
	{
		case 1:
			printf("\nMonday");
			break;
			
		case 2:
			printf("\nTuesday");
			break;
			
		case 3:
			printf("\nWednesday");
			break;
			
		case 4:
			printf("\nThursday");
			break;
			
		case 5:
			printf("\nFriday");
			break;
			
		case 6:
			printf("\nSaturday");
			break;
			
		case 7:
			printf("\nSunday");
			break;						
			
		default:
		{
			printf("\nPlease input corect number!!");
			}	
	}
}


//   ii. Vowel or Consonant using switch case
//#include<stdio.h>
//main()
//{
//	char n;
//	
//	printf("\nEnter Character : ");
//	scanf("%c",&n);
//	
//	switch(n)
//	{
//		case'a':
//		case'A':
//		case'e':
//		case'E':
//	    case'I':
//	    case'i':
//		case'O':
//		case'o':
//		case'U':
//		case'u':
//			printf("\n%c is Vowels",n);
//			break;
//			
//		default:
//		{
//			printf("\n%c is consonants",n);
//			}	
//			
//	}
//	
//}
