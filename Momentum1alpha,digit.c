#include<stdio.h>
main()
{
	char a,ch;
	printf("Enter any Character=");
	scanf("%c",&ch);
	
	if (a>='A' && a<='Z')
	{
		printf("value is Alphabet");
	}
	else if (a>='0' && a<='9')
	{
		printf("Value is digit");
	}
	else  
	{
		printf("value is a special character");
	}
	
}


