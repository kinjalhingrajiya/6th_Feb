#include<stdio.h>									//header file
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
menu()															//function creation
{
	printf("Main Menu");									//print in console screen
	printf("\n\t 1.Equality");
	printf("\n\t 2.String Copy");
	printf("\n\t 3.Concat");
	printf("\n\t 4.Show");
	printf("\n\t 5.Reverse");
	printf("\n\t 6.Palindrom");
	printf("\n\t 7.Length of String");
	printf("\n\t 8.Exit");
}
main()											//	main function
{
	
	int choice,a;								//variable declaration
	char name1[20],name2[20];
	bool s= true;
	menu();										//function call
	while(s)										//while loop for status
	{
	printf("\nEnter Your Choice:");				//print in console
	scanf("%d",&choice);							//get choice from the user
	switch(choice)								//switch case
	{
	case 1:										//case 1
		printf("\nEnter Name1 : ");
		scanf("%s",&name1);						//Get string from user
		printf("\nEnter Name2 :");
		scanf("%s",&name2);						//Get string from user
		if(strcmp(name1,name2)==0)				//if condition on string function used for compare two string 		
		{
			printf("\nBoth String are same");				//both string same print this statement
		}
		else
		{
			printf("\nString is different");				//both string are different print this statement
		}
		break;												//break the below switch code.
	case 2:
		printf("\nEnter String 1:");
		scanf("%s",&name1);
		printf("\nEnter String 2:");
		scanf("%s",&name2);
		strcpy(name2,name1);										//string function used for copy string 2 in string1
		printf("\nAfter Copy String 2 is = %s",name2);
		break;
	case 3:
		printf("\nEnter String 1:");
		scanf("%s",&name1);
		printf("\nEnter String 2:");
		scanf("%s",&name2);
		printf("\nConcat=%s",strcat(name1, name2));					//print the concat string of string 1 or string2
		break;
	case 4:
		printf("\nEnter String :");
		scanf("%s",&name1);
		printf("\nString = %s",name1);							//show the input string in console screen
		break;
	case 5:
		printf("\nEnter String :");
		scanf("%s",&name1);
		printf("\nReverse String is = %s",strrev(name1));			//reverse string is print in console
		break;
	case 6:
		printf("\nEnter Any string:");
		scanf("%s",&name1);
		strcpy(name2,name1);									//string1 copy in string2
		strrev(name2);											//reverse a string
		if(strcmp(name1,name2)==0)								//string 1 and string 2 compare
		{
			printf("\nstring is palindrom");					//both string are same so print this statement
		}
		else	
		{
			printf("\nstring is not palindrom");				//both string are different so print this statement
		}
		break;
	case 7:
		printf("\nEnter String :");
		scanf("%s",&name1);
		printf("\nString Length is = %d",strlen(name1));		//print the length of string in console
		break;
	case 8:
		exit(0);
		break;
	default:
		printf("\nEnter Valid Choice.........");			//if you not enter 1 to 8 so print this statement in console
		s=false;
		
	}
	fflush(stdin);											//check output buffer 
	printf("\nDo you want to Continue(Press 1 to continue):");		
	scanf("%d",&a);											//if you continue so press 1
	if(a==1)										//check press 1 or not
		{
			menu();									//menu function call
		}	
	else
		{
			printf("\nInvalid Input");				//you not enter 1 so print this statement
			s=false;
		}
}
}
