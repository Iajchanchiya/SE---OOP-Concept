#include<iostream>
using namespace std;
class bank{
	string holder_name;
	int holder_balance=10000;
	int amount,acount_number,withdraw_amount,deposit_amount;
	
	public:
		void name()
		{
			cout<<"Enter Account Holder Name : ";
			cin>>holder_name;	
		}
		void displayname()
		{
			cout<<"\n\nAccount Holder Name Is : "<<holder_name;
		}
		void accountNo()
		{
			cout<<"\nEnter Account Number : ";
			cin>>acount_number;
		}
		void displayaccountNo()
		{
			cout<<"\n\nYour Account Number Is : "<<acount_number;
		} 
		void displayaccountbalance()
		{
			cout<<"\n\nYour Acconut Balance Is : "<<holder_balance;
		} 
		void withdraw()
		{
			cout<<"\nEnter Withdraw Amount : ";
			cin>>amount;
			withdraw_amount=holder_balance-amount;
		}
		void afterwithdraw()
		{
			cout<<"\nAfter Withdraw Your Finale Amount : "<<withdraw_amount;
		}
		void deposit()
		{
			cout<<"\nEnter Deposit Amount : ";
			cin>>amount;
			deposit_amount=holder_balance+amount;
		}
		void afterdeposit()
		{
			cout<<"\nAfter Deposit Your Final Amount : "<<deposit_amount;
		}
	
};
int main()
{
	bank b1;
	char ch;
	
	b1.name();
	b1.accountNo();
	
	b1.displayname();
	b1.displayaccountNo();
	b1.displayaccountbalance();
	
		mainmenu:
	cout<<"\n\nDeposit \n\nWithdraw\n\nCheck Balance : ";
	cin>>ch;
	
		
	switch(ch)
	{

		case 'c':
			{
				b1.displayaccountbalance();
				cout<<"\n\n\nThank You For Visit";
				goto mainmenu;
				break;
			}
		case 'd':
			{
				b1.deposit();
				b1.afterdeposit();
				cout<<"\n\n\nThank You For Visit";
				goto mainmenu;
				break;
			}
		case 'w':
			{
				b1.withdraw();
				b1.afterwithdraw();
				cout<<"\n\n\nThank You For Visit";
				goto mainmenu;
				break;
			}
	}
	
	
	return 0;
}
