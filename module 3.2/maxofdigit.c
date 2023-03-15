#include<stdio.h>
main()
{
	int no,f=0,l=0;
	printf("Enter any Number :");
	scanf("%d",&no);
	while(no>0)
	{
		f=no%10;
		if(f>l)
		{
			l=f;
		}
		no=no/10;
	}
	printf("max digit of is %d",l);
	}
