#include<iostream>				//header file
using namespace std;			//standard library
template <class k>				//template 
int Swap(k& x,k& y)				//function
	{
		k t;					//class object
		x=x+y;					//Equation for swap value
		y=x-y;
		x=x-y;
		return 0;
	}
main()							//inbuilt function
{	
	int x,y;					//variable declaration
	 x=10,y=20;					//assign value of variable
	Swap(x,y);					//function calling
	cout<<"x="<<x<<endl;		//print value of x
	cout<<"y="<<y;				//print value of y
}
