#include<stdio.h>
main()
{
	int i,j;
	int n1=48,n2=49;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		    {
		    	if(j%2==0)
		    	{
				printf(" %c",n1);
				}
				else
				{
					printf(" %c",n2);
				}
			}	
			printf("\n");
	}
}
