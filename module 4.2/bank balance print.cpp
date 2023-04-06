#include<iostream>
using namespace std;
class bank										//class
{
	public:										//access modifier
	string depositor_nm,acc_type;				//data member
	int acc_no,acc_bal,deposite_amt,withdrawal_amt;	//data member
	void input()								//input function
	{
		cout<<"Enter Depositoe Name:";
		cin>>depositor_nm;						//get value
		cout<<"\nEnter Account Number:";
		cin>>acc_no;							//get value
		cout<<"\nEnter Type of Account:";
		cin>>acc_type;							//get value
	}
	void deposited_amount()						//deposite amt function
	{
		cout<<"\nEnter Deposited Amount:";		
		cin>>deposite_amt;							//get deposite amount
	}
	void withdrawal()						//withdrawal amout function
	{
		cout<<"\nEnter Withdrwal Amout:";	
		cin>>withdrawal_amt;					//get withdrawal amount
	}
	void balance()							//balance check and name display function
	{
		cout<<"\nDepositor name:"<<depositor_nm;		//print depositor name
		acc_bal=deposite_amt-withdrawal_amt;			//balance check
		cout<<"\nBalance:"<<acc_bal;						//total account balance print
	}
};
main()
{
	bank b;							//class object
	b.input();						//function calling using class object
	b.deposited_amount();			//function calling using class object
	b.withdrawal();					//function calling using class object
	b.balance();					//function calling using class object
}
