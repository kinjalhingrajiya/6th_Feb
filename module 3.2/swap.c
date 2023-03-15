#include<stdio.h>
main()
{
	int a,b;
	printf("enter value a and b :");
	scanf("%d",&a,&b);
	a=b;
	printf("value of a = %d",a);
	b=a;
	printf("value of b= %d",b);
}
