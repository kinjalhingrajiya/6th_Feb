#include<iostream>
using namespace std;
class arithmatic								//calss creation
{
	public:										//access modofier
		int no1,no2;							//data member
		arithmatic(int no1,int no2)				//constrctor creation
		{
		cout<<"\nEnter value of no1 and no2:";
		cin>>no1>>no2;		
		cout<<"\nAddition="<<no1+no2;					//addition print
		cout<<"\nSubstraction="<<no1-no2;				//multiplication print
		cout<<"\nMultiplication="<<no1*no2;				//substraction print
		cout<<"\ndivision="<<no1/no2;					//division print
		}
};
main()
{
	int no1,no2;							//variable declaration	
	arithmatic a(no1,no2);					//class object creation1			
	arithmatic a1(no1,no2);					//class object creation2		
	arithmatic a2(no1,no2);					//class object creation3
	arithmatic a3(no1,no2);					//class object creation4	
}
