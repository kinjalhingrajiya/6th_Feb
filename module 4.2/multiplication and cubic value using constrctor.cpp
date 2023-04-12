#include<iostream>
using namespace std;
inline multiplication(int a,int b)				//inline function 
{		
		cout<<"Enter Value of a and b:";		
		cin>>a>>b;
		cout<<"\nMultiplication="<<a*b;				//multiplition print
	}
inline cube(int a)				//inline function 
{		
		cout<<"\nEnter Value of a:";		
		cin>>a;
		cout<<"\ncube:"<<a*a*a;				//cube print
	}
main()
{
	int a,b;
	multiplication(a,b);			//function calling
	cube (a);					//Function calling
}
