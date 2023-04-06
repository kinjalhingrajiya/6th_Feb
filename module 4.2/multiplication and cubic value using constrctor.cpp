#include<iostream>
using namespace std;
class multiplication				//class creation
{
	public:								//access modofier
	int a,b;							//member variable declaration
	multiplication(int a,int b)			//constrctor creation
	{
		cout<<"Enter Value of a and b:";		
		cin>>a>>b;
		cout<<"\nMultiplication="<<a*b;				//multiplition print
	}
};
class cubic						//class creation
{
	public:						//access modofier
	int c;						//member variable declaration
	cubic(int c)				//constrctor creation
	{
	cout<<"\nEnter Value of c:";
	cin>>c;
	cout<<"cube="<<c*c;				//cubic value print
	}
};
main()
{
	int a,b,c;
	multiplication m1(a,b);			//class object creation
	cubic c1(c);					//class object creation
}
