#include<iostream>							//header file
using namespace std;						//standard libreary
int arithmatic(int a,int b)					//function overloading
{
	return a+b;								//return addition
}
int arithmatic(int a,int b,int c)
{
	return a-b-c;
}
float arithmatic(float f,float g)
{
	return f*g;
}
float arithmatic(float a,float b,int c)
{
	return a/b;
}
main()
{
	cout<<"Addition is="<<arithmatic(10,20);				//function calling
	cout<<"\nSubstraction="<<arithmatic(20,5,7);
	cout<<"\nMultiplication="<<arithmatic(20.00f,2.00f);
	cout<<"\nDivision="<<arithmatic(50.00f,2.0f);
}
