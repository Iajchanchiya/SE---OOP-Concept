#include<iostream>
using namespace std;
class add
{
	int no1,no2,ans;
	public:
	void get()
	{
		cout<<"Enter number 1 :\t";
	cin>>no1;
	cout<<"\nEnter number 2 :\t";
	cin>>no2;
	}
	public:
	void display()
	{
		ans=no1+no2;
	cout<<ans;
	}
};
class sub
{
	int no1,no2,ans;
	public:
	void get()
	{
		cout<<"Enter number 1 :\t";
	cin>>no1;
	cout<<"\nEnter number 2 :\t";
	cin>>no2;
	}
	public:
	void display()
	{
		ans=no1-no2;
	cout<<ans;
	}
};
class mul
{
	int no1,no2,ans;
	public:
	void get()
	{
		cout<<"Enter number 1 :\t";
	cin>>no1;
	cout<<"\nEnter number 2 :\t";
	cin>>no2;
	}
	public:
	void display()
	{
		ans=no1*no2;
	cout<<ans;
	}
};
class div
{
	int no1,no2,ans;
	public:
	void get()
	{
		cout<<"Enter number 1 :\t";
	cin>>no1;
	cout<<"\nEnter number 2 :\t";
	cin>>no2;
	}
	public:
	void display()
	{
		ans=no1/no2;
	cout<<ans;
	}
};
class mod
{
	int no1,no2,ans;
	public:
	void get()
	{
		cout<<"Enter number 1 :\t";
	cin>>no1;
	cout<<"\nEnter number 2 :\t";
	cin>>no2;
	}
	public:
	void display()
	{
		ans=no1%no2;
	cout<<ans;
	}
};
int main()
{
		int no1,no2,ans;
		add a1;
		sub s1;
		mul m1;
		div d1;
		mod m2;
	char ch;
	
	cout<<"\nEnter + For + \nEnter 2 For - \nEnter 3 For * \nEnter 4 For / \nEnter 5 For Modulo";
	
	cout<<"\n\nEnter Your Choice :\t";
	cin>>ch;
	
	switch(ch)
	{
		case '+':
			a1.get();
			a1.display();
			break;
		case '-':
			s1.get();
			s1.display();
			break;
		case '*':
			m1.get();
			m1.display();
			break;
		case '/':
			d1.get();
			d1.display();
			break;
		case '%':
			m2.get();
			m2.display();
			break;
		default:
			cout<<"Enter Valid Choice";
			break;
	}
	
	
	return 0;
}
