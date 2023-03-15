#include<stdio.h>
main()
{
	int i,n;
	double a[10];
	printf("Enter how many element you enter (1 to 100)");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("maximum value is : %d",a[0]);
}
