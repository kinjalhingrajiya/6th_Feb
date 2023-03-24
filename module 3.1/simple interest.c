//WAP to find simple interest 
#include<stdio.h>
main()
{
	float a,r,t,p;
	printf("Enter Value of p :");
	scanf("%f",&p);
	printf("\nEnter Value of r : ");
	scanf("%f",&r);
	printf("\nEnter Value of t : ");
	scanf("%f",&t);
	a=p*t*r/100;
	printf("simple Interest is : %f",a);
}
