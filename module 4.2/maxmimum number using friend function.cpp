#include<iostream>									//header file
using namespace std;								//standard library
class test											//class creation
{
		protected:									//access specifier
			int a=10;								//variable declaration
			public:
				int b=15;
				friend void fun();					//friend function declaration
};
void fun()											//function creation
{
	test t;											//Class object creation
	if(t.a<t.b)										//check which value is greater
	{
		cout<<t.b<<" is maximum";					//a<b so print b is maximum
	}
	else
	{
		cout<<t.a<<" is maximum";					//a>b so print a is maximum
	}
}
main()												//main function
{
	fun();											//function calling
}

