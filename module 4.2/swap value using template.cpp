#include<iostream>
using namespace std;
template <class k>
int Swap(k& x,k& y)
	{
		k t;
		x=x+y;
		y=x-y;
		x=x-y;
		return 0;
		
	}
main()
{	
	int x,y;
	 x=10,y=20;
	Swap(x,y);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y;
}
