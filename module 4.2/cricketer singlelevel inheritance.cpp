#include<iostream>												
using namespace std;
class cricketer															//base class creation
{
	public:																//access modifier
		int tot_run,best_perfo;											//data member
		float average_run;
		
};
class batsman:public cricketer											//derived class creation			
{
	public:			
		void inputdata()												//member function
		{
			cout<<"Enter total run:";
			cin>>tot_run;												//get run
			cout<<"\nEnter Best Perfomance:";
			cin>>best_perfo;											//get best perfomance
	}
		void aveg_run()														//member function
	{
		average_run=(float)tot_run/3;						//average run print
	}
	void displaydata()													//member function
	{
		cout<<"\nTotal Runs="<<tot_run;									//display data in console
		cout<<"\nBest Perfomance="<<best_perfo;
		cout<<"\nAverage Runs="<<average_run;
	}

};
main()
{
	batsman b1;														//derived class object creation
	b1.inputdata();	
	b1.aveg_run();											//call method
	b1.displaydata();
	
}
