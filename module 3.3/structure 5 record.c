#include<stdio.h>
struct emp
{
	int emp_no,emp_age;
	char emp_name[4],emp_address[10];
};
main()
{
	int n=5;
	struct emp e[n];
	int i;

	for(i=0;i<n;i++)
	{
		printf("Enter Emp_no:");
		scanf("%d",&e[i].emp_no);
		printf("\nEnter Emp_name:");
		scanf("%s",&e[i].emp_name);
		printf("\nEnter Emp_age:");
		scanf("%d",&e[i].emp_age);
		printf("\nEnter Emp_add:");
		scanf("%s",&e[i].emp_address);
	}
	for(i=0;i<n;i++)
	{
	printf("\nEmp_no = %d",e[i].emp_no);
	printf("\nEmp_name = %s",e[i].emp_name);
	printf("\nEmp_Age=%d",e[i].emp_age);
	printf("\nEmp_Add=%s",e[i].emp_address);
}
}

