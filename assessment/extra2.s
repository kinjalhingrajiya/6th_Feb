#include<stdio.h>
menu()
{
	printf("Main Menu");
	printf("\n\t 1.Equality");
	printf("\n\t 2.String Copy");
	printf("\n\t 3.Concat");
	printf("\n\t 4.Show");
	printf("\n\t 5.Reverse");
	printf("\n\t 6.Palindrom");
	printf("\n\t 7.SubString");
	printf("\n\t 8.Exit");
}
main()
{
	int choice;
	printf("\nEnter Your Choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
				char name1[20],name2[20];
	printf("Enter Name1 : ");
	gets(name1);
	printf("Enter Name2 :");
	gets(name2);
	if(strcmp(name1,name2)==0)
	{
		printf("\nBoth Name are same");
	}
	else
	{
		printf("\nName is different");
	}
	case 2:
	char s1[20],s2[20];
	printf("Enter String 1:");
	printf("%s",&s1);
	printf("Enter String 2:");
	printf("%s",&s2);
	strcpy(s2,s1);
	printf(" After Copy String 2 is = %s",s2);
	}
}
