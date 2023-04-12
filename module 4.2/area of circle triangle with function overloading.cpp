#include<iostream>								//header file
using namespace std;							//standard library
int area(int area,int breadth)					//function
{
	return area*breadth;						//return area of rectangle
}
float area(float area,float breadth)			//(Function overloading)
{
	return 0.5*area* breadth;					//return area of triangle
}
float area(float area)					//(Function overloading)
{
	return 3.14*area*area;				//return area of Circle
}
main()											//inbuilt function
{
	cout<<"Area of rectangle="<<area(5,5)<<endl;		//Function calling
	cout<<"Area of Triangle="<<area(5,6)<<endl;
	cout<<"Area of circle="<<area(5)<<endl;
}
