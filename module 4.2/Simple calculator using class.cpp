#include<iostream>
using namespace std;
class calculator
{
	public:
		int a,b;
};
main()
{
	calculator calc;
	cout<<"Enter Value of a and b :";
	cin>>calc.a>>calc.b;
	cout<<"\nAddition ="<<calc.a+calc.b;
	cout<<"\nSubstraction="<<calc.a-calc.b;
	cout<<"\nMultiplication="<<calc.a*calc.b;
	cout<<"\nDivision="<<calc.a/calc.b;
}
