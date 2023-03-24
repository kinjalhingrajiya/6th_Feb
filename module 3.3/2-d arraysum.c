#include<stdio.h>
main()
{
	int a[2][3],b[2][3],i,j,sum[2][3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
		printf("Enter Value :  ");
		scanf("%d",&a[i][j]);
		}	
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
	printf(" %d ",a[i][j]);	
		}	
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
		printf("Enter Value :  ");
		scanf("%d",&b[i][j]);
		}	
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
	printf(" %d ",b[i][j]);	
		}	
		printf("\n");
	}
	printf("---- Addition -----");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
	    sum[i][j]=a[i][j]+b[i][j];	
		printf(" %d ",sum[i][j]);
	}
	 printf("\n");
}
	printf("---- Subtraction -----");
	printf("\n");
	 for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
	    sum[i][j]=a[i][j]-b[i][j];	
		printf(" %d ",sum[i][j]);
	}
	 printf("\n");
		
}
	printf("---- Multiplication -----");
	printf("\n");
    for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
	    sum[i][j]=a[i][j]*b[i][j];	
		printf(" %d ",sum[i][j]);
	}
	 printf("\n");
		
}
	
}

