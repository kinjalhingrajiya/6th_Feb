#include<stdio.h>
main()
{
	int i=0,no;
	printf("Enter Any Number :");
	scanf("%d",&no);
	while(no>0)
	{
		i=i+no%10;
		no=no/10;
	}
	printf("%d",i);
}
