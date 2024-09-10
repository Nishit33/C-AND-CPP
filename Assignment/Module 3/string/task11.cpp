//11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<Stdio.h>
#include<string.h>
main()
{
	char a[50];
	int i;
	
	printf("\nEnter sentence : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<= 'z' )
		{
			a[i]=a[i] - 'a'+'A';
		}
		
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i] - 'A'+ 'a';
		}
	}
	
	printf("After Sentence : %s",a);
}

