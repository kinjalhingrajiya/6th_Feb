#include<stdio.h>
main()
{
	int i,fact,tot=1;
	printf("enter fact value:");
	scanf("%d",&fact);
	for(i=fact;i>=1;i--)
	{
		tot=tot*i;	
	}
		printf("tot:%d",tot);
}
