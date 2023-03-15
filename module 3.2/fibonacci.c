#include<stdio.h>
main()
{
	int i,no,first=0,second=1,third;
	printf("Enter any number :");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("%d\n",first);
		third=second+first;
		first=second;
		second=third;
		
	}
}
