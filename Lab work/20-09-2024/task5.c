
// String inbuilt function
	// string length          strlen
	// string compare         strcmp
 	// string concatenate      strcat
 	// string copy            strcpy
 	
#include<stdio.h>
#include<string.h>

main()

{
//	char a[10];
//	
//	printf("Enter String : ");
//	scanf("%s",&a);
//	
//	printf("\nYour Name is : %s",a);


//int length=0;
//char i,n[10];
//
//printf("Enter Name : ");
//scanf("%s",&n);
//
//for(i=0;n[i]!='\0';i++)
//{
//	length++;
//}
//
//printf("Your string length is : %d",length);


//char a[10],b[10];
//int i;
//
//printf("Enter Name A : ");
//gets(a);
//
//
//for(i=0;a[i]!='\0';i++)
//{
//	b[i]=a[i];
//}
//b[i]='\0';
//
//printf("copy string is : %s",b);



char a[10],b[10], i,j;

printf("\nEnter Name A : ");
gets(a);


printf("\nEnter Name b : ");
gets(b);

for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++)
{
	a[i]=b[j];
	i++;
}
b[j]='\0';
printf("String concat is : %s",a);

}
