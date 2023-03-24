#include<stdio.h>
void max()
{
	int a[3],i;
	for(i=0;i<3;i++)
	{
		printf("Enter Value");
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("maximum value is : %d",a[0]);
}
void main()
{
	max();
}
