//WAP to check if the given year is a leap year or not.  

#include<stdio.h>
main()
{
	int a;
	printf("Enter any year :");
	scanf("%d",&a);
	if(a%4 == 0)
	{
		printf("leap year");
	}
	else
	{
		printf("year is not a leap year");
	}
}
