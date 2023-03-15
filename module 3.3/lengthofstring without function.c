#include<stdio.h>
#include<string.h>
main()
{
	int i,l=0;
	char s1[30];
	printf("Enter Any String : ");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		l++;
	}
	printf(" length of %s = %d",s1,l);
}
