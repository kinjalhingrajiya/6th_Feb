#include<iostream>
using namespace std;
class student										//base class
{
	public:										//access modifier
		int roll_no;							//data member
		void input_rollnumber()					//method
		{
			cout<<"Enter Roll Number:";
			cin>>roll_no;
		}
};
class test									//base class
{
	public:
		int sub1_mark,sub2_mark;			//data member
		void input_mark()					//method
		{
			cout<<"\nEnter Subject1 Mark:";
			cin>>sub1_mark;
			cout<<"\nEnter Subject2 Mark:";
			cin>>sub2_mark;
			}	
};
class result:public student,public test					//derived class
{
	public:		
		int tot_mark;									//data member
		void total_mark()								//method
		{
			tot_mark=sub1_mark+sub2_mark;
		}
		void display()									//method
		{
			cout<<"\nRoll Number:"<<roll_no;			//print datamember of baaseclass
			cout<<"\nSubject1 Marks:"<<sub1_mark;		//print datamember of baaseclass
			cout<<"\nSubject2 Marks:"<<sub2_mark;		//print datamember of baaseclass
			cout<<"\nTotal Marks:"<<tot_mark;			
		}
};
main()		
{
	result r1;													//derived class object creation
	r1.input_rollnumber();										//method calling
	r1.input_mark();
	r1.total_mark();
	r1.display();
}
