#include<stdio.h>
int fact(int x)
{
	if(x>1)
	{
		return x*fact(x-1);
	}
}
main()
{
	printf("%d",fact(5));
}
