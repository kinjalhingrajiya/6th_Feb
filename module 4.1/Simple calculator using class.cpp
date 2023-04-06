#include<iostream>				//header file
using namespace std;			//standard library
class calculator				//calss define
{
	public:					//acscess modifier
		int a,b;			//variable declaration
};	
main()						//main function
{		
	calculator calc;		//class object create
	cout<<"Enter Value of a and b :";		//print in console
	cin>>calc.a>>calc.b;						//get the value of a and b
	cout<<"\nAddition ="<<calc.a+calc.b;		//addition print
	cout<<"\nSubstraction="<<calc.a-calc.b;		//substraction print
	cout<<"\nMultiplication="<<calc.a*calc.b;	//multiplication print
	cout<<"\nDivision="<<calc.a/calc.b;			//division print
}
