#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
menu()
{
	printf("Main Menu");
	printf("\n\t 1.Equality");
	printf("\n\t 2.String Copy");
	printf("\n\t 3.Concat");
	printf("\n\t 4.Show");
	printf("\n\t 5.Reverse");
	printf("\n\t 6.Palindrom");
	printf("\n\t 7.Length of String");
	printf("\n\t 8.Exit");
}
main()
{
	
	int choice,a;
	char name1[20],name2[20];
	bool s= true;
	menu();
	while(s)
	{
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("\nEnter Name1 : ");
		scanf("%s",&name1);
		printf("\nEnter Name2 :");
		scanf("%s",&name2);
		if(strcmp(name1,name2)==0)
		{
			printf("\nBoth String are same");
		}
		else
		{
			printf("\nString is different");
		}
		break;
	case 2:
		printf("\nEnter String 1:");
		scanf("%s",&name1);
		printf("\nEnter String 2:");
		scanf("%s",&name2);
		strcpy(name2,name1);
		printf("\nAfter Copy String 2 is = %s",name2);
		break;
	case 3:
		printf("\nEnter String 1:");
		scanf("%s",&name1);
		printf("\nEnter String 2:");
		scanf("%s",&name2);
		printf("\nConcat=%s",strcat(name1, name2));
		break;
	case 4:
		printf("\nEnter String :");
		scanf("%s",&name1);
		printf("\nString = %s",name1);
		break;
	case 5:
		printf("\nEnter String :");
		scanf("%s",&name1);
		printf("\nReverse String is = %s",strrev(name1));
		break;
	case 6:
		printf("\nEnter Any string:");
		scanf("%s",&name1);
		strcpy(name2,name1);
		strrev(name2);
		if(strcmp(name1,name2)==0)
		{
			printf("\nstring is palindrom");
		}
		else
		{
			printf("\nstring is not palindrom");
		}
		break;
	case 7:
		printf("\nEnter String :");
		scanf("%s",&name1);
		printf("\nString Length is = %d",strlen(name1));
		break;
	case 8:
		exit(0);
		break;
	default:
		printf("\nEnter Valid Choice.........");
		s=false;
		
	}
	fflush(stdin);
	printf("\nDo you want to Continue(Press 1 to continue):");
	scanf("%d",&a);
	if(a==1)
		{
			menu();
		}	
	else
		{
			printf("\nInvalid Input");
			s=false;
		}
}
}
