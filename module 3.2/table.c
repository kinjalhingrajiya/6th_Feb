#include<stdio.h>
main()
{
	int i,no;
	printf("enter the table number:");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d  = %d\n",no,i,no*i);
	}
}
