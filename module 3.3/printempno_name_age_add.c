#include<stdio.h>
union Person
{
	int age;
	char name[20],address[20];
	int num;
	
};
main()
{
	union Person p;
	printf("Enter Employee No.:");
	scanf("%d",&p.num);
	printf("\nEmployee NO. = %d",p.num);
	printf("\nEnter Employee Name:");
	scanf("%s",&p.name);
	printf("\nEmoployee name = %s",p.name);
	printf("\nEnter Employee Age:");
	scanf("%d",&p.age);
	printf("\nAge is = %d",p.age);
	printf("\nEnter Employee Address :");
	scanf("%s",&p.address);
	printf("\nAddress = %s",p.address);
}
