#include<stdio.h>
main()
{
	int no,last,first,sum=0;
	printf("Enter Any Number :");
	scanf("%d",&no);
	last=no%10;
	while(no>=10)
	{
		no=no/10;
	}
	first=no;
	sum=first+last;
	printf("\n%d",sum);
}
