/*Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo) */ 

#include<stdio.h>
main()
{
	float a,b;
	printf ("Enter value of a : ");
	scanf("%f",&a);
	printf("Enter Value b : ");
	scanf("%f",&b);
	printf("%f + %f = %f",a,b,a+b);
	printf("\n%d - %d = %f",a,b,a-b);
	printf("\n%d * %d = %f",a,b,a*b);	
	printf("\n%d / %d = %f",a,b,a/b);
	printf("\n Mod = %f",a%b);
}
