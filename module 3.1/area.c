//WAP to find area of circle, rectangle and triangle   
#include<stdio.h>
main()
{
	float radius,p=3.14,area,width,length,base,height;
	printf ("enter value of radius : ");
	scanf("%f",&radius);
	area=p*radius*radius;
	printf("\nArea of circle is %f",area);
	printf("\nEnter value of Width : ");
	scanf("%f",&width);
	printf("\nEnter value of length : ");
	scanf("%f",&length);
	area=width*length;
	printf("\nArea of Rectangle is %f",area);
	printf("\nEnter value of Base : ");
	scanf("%f",&base);
	printf("\nEnter value of height : ");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("\n Area ff triangle is : %f",area);
	
}
