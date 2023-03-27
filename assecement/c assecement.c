#include<stdio.h>
main()
{
	int a[2][2],b[2][2],i,j,mul[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		printf("Enter Element:  ");
		scanf("%d",&a[i][j]);
		}	
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
	printf(" %d ",a[i][j]);	
		}	
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
		printf("Enter Element :  ");
		scanf("%d",&b[i][j]);
		}	
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
	printf(" %d ",b[i][j]);	
		}	
		printf("\n");
	}
	
	printf("---- Multiplication -----");
	printf("\n");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	{
	    mul[i][j]=a[i][j]*b[i][j];	
		printf(" %d ",mul[i][j]);
	}
	 printf("\n");
		
}
	
}

