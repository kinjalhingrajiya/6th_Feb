//WAP to find number is even or odd using ternary operator
#include<stdio.h>
main()
{
	int num;
	printf("enter Any number :");
	scanf("%d",&num);
	(num%2==0) ? printf("\nNumber is even") : printf("\nNumber is odd");
}
