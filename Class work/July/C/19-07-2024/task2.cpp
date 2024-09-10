//#include<stdio.h>
//#include<stdlib.h>
//
//main()
//{
//	printf("\n********** Welcome to the game *************\n");
//	
//	while(1) // infinite loop use 1is true and 0 is false 
//	{
//		int n=rand() % 50+1; // random number between 1 to 50 
//		//printf("%d",n);
//		printf("\n********* Enter Number between 1 to 50  ***********\n");
//		int choice;                 // user input number store 
//		printf("\nEnter Number : "); // user input number 
//		scanf("%d",&choice);
//		
//		if(choice>50) // if number input is above 50 this is invalid number 
//		{
//			printf("\n%d Number is invalid and you are quit the game !!!!",choice);
//			break;    // and also invalid number break you are quite the game !
//		}
//		else if(choice==n) // if number and user input same the game is over and win 
//		{
//			printf("\nYou are win !!!!",choice); // if the game is win you are quite 
//			break;                                // and its mendatory break;
//		}
//		else if(choice<n) // otherwise choice number is lessthan original number 
//		{
//			printf("\n%d is lower than original number!!",choice);
//		}
//		else // other choice number is bigger than original number !
//		{
//			printf("\n%d is greater than original number!!",choice);
//		}
//	}
//}
