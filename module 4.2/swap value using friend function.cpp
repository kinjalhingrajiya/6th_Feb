#include<iostream>								//header file
using namespace std;							//standard library
class test										//Class creation
{
		protected:								//access specifier
			int a=10;							//variable declaration
			public:
				int b=15;
				friend void fun();				//friend function 
};
void fun()										//friend function creation
{
	test t;									//test object creation
	t.a=t.a+t.b;							//swaping logic
	t.b=t.a-t.b;							//swaping logic
	t.a=t.a-t.b;							//swaping logic
	cout<<"a="<<t.a<<endl;					//print value of a 
	cout<<"b="<<t.b<<endl;					//print value of b
}
main()										//main function
{
	fun();									//function calling
}

