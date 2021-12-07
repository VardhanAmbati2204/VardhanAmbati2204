#include<stdio.h>
main()
{
	char x;
	printf("enter x");
	scanf("\n%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		printf("\n%c is vowel");
	}
	else
	{
		printf("\nNot an vowel");
	}
}
