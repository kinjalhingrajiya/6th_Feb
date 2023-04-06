#include<iostream>
using namespace std;
class person									// baseclass creation
{
	public:										//access modifier
		string name;							//data member
		int age;
		void inputdata()						//input method
		{
			cout<<"Enter Name:";				//statement
			cin>>name;							//get value
			cout<<"\nEnter Age:";
			cin>>age;
		}
};
class student:public person						//derived class creation		
{
	public:
		float per;								//data member
		void percentage()							//method
		{
			cout<<"Enter Percentage =";
			cin>>per;
		}
};
class teacher:public student					//derived class
{
	public:
		int sal;
		void salary()							//method
		{
			cout<<"Enter Salary=";
			cin>>sal;
		}
			void displaydata()					//display menthod
		{
			cout<<"\nName ="<<name;					//base class member access
			cout<<"\nAge ="<<age;					//base class member access
			//cout<<"\nsala="<<sal;
			cout<<"\nPercentage="<<per;				//base class member access
			cout<<"\nsalary="<<sal;
		}
		
};
main()
{
	teacher t1;					//last derived class object creation
	t1.inputdata();				//method calling 
	t1.percentage();			//method calling 
	t1.salary();				//method calling 
	t1.displaydata();			//method calling 
}
