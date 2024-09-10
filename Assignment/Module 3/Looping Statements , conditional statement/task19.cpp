// 19.patterns;




//#include<Stdio.h>
//main()
//{
//	char n='A';                     // ABCD PATTERNS 
//	int i,j;
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" %c",n);
//			n++;
//		}
//		printf("\n");
//	}
//}






//#include<stdio.h>
//main()
//{
//	int n=1,i,j;                   // 1 to 15 number for loop 
//	
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" %d",n);
//			n++;
//		}
//		printf("\n");
//	}
//}





//#include<stdio.h>
//main()
//{
//	int star;
//	int i,j,n=5,k;                // Triangle 
//	
//	for(i=1;i<=5;i++)
//	{
//		star = 2*i-1;
//		
//		for(k=1;k<=5-i;k++)
//		{
//			printf("  ");
//		}
//		
//		for(j=1;j<=star;j++)
//		{
//			printf(" *");
//		}
//		
//		printf("\n");
//	}
//}






//#include<stdio.h>
//main()
//{
//	int i,j;         // ABCD pattern            A/AB/ABC/ABCD/ABCDE/ABCDEF
//	
//	for(i=1;i<=5;i++)
//	{
//		char c='A';
//		for(j=1;j<=i;j++)
//		{
//			printf("%c",c);
//			c++;
//		}
//		printf("\n");
//	}
//}



//#include<stdio.h>
//main()
//{
//	int i,j;
//	
//	for(i=1;i<=6;i++)            // Side triangle pattern star 
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//
//    for(i=5;i>=1;i--)
//    {
//
//		for(j=1;j<=i;j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//}
	
	
	
#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)   // number print 1/10/101/1010/10101 
	{
		for(j=1;j<=i;j++)
		{
		if(j%2==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		}
		printf("\n");
	}
}
