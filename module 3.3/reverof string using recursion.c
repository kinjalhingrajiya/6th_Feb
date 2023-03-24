#include<stdio.h>
int reverse(char a[10])
{
	return strrev(a);
}
main()
{
	char c[10];
	printf("Enter your name:");
	gets(c);
	printf("%s",reverse(c));
}


