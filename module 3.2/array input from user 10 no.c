#include<stdio.h>
main()
{
	int a[10],i,odd=0,even=0,sum_odd=0,sum_even=0;
	for(i=0;i<10;i++)
	{
		printf("Enter any 10 number : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			odd=odd+1;
			sum_odd = sum_odd + a[i];
		}
		else
		{
			even=even+1;
			sum_even = sum_even + a[i];
		}
	}
	printf("\nNumber of odd number is = %d",odd);
	printf("\nNumber of even number is = %d",even);
	printf("\n sum of odd number = %d",sum_odd);
	printf("\n sum of even number = %d",sum_even);
}
