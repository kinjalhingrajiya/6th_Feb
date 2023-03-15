#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str2[20],str3[20];
	printf("Enter Any string:");
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("\nstring is palindrom");
	}
	else
	{
		printf("\nstring is not palindrom");
	}
}
