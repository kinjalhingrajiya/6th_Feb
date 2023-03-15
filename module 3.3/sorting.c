#include<stdio.h>
main()
{
	int a[5],i,b,j,k;
	for(i=0;i<5;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);
	}
	printf("Enter your choice : \n press 1 for ascending order \n press 2 for descending order \n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i]>a[j])
					{
						k=a[i];
						a[i]=a[j];
						a[j]=k;
					}
				}
			}
			printf("Ascending order is = ");
			for(i=0;i<5;i++)
			{
				printf(" %d,",a[i]);
			}
			break;
			case 2:
				for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i]<a[j])
					{
						k=a[i];
						a[i]=a[j];
						a[j]=k;
					}
				}
			}
			printf("Descending order is = ");
			for(i=0;i<5;i++)
			{
				printf(" %d,",a[i]);
			}
			break;
	}
	
}
