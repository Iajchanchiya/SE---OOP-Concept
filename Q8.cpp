#include<iostream>
using namespace std;
class person
{
	string name;
	int age;
	string country;
	
	public:
    void getName() {
    	cout<<"Enter Name : ";
        cin>>name;
    }
	void displayname()
	{
		cout<<name;
    }	
    void getage(){
    	cout<<"Enter Age : ";
    	cin>>age;
	}
	void displayage()
	{
		cout<<age;
	}
	void getcountry()
	{
		cout<<"Enter Country : ";
		cin>>country;
	}
	void displaycountry()
	{
		cout<<country;
	}
};
int main()
{
	person p1;
	
	p1.getName();
	p1.getage();

	cout<<"Name: ";p1.displayname();
	cout<<"\n\nAge : ";p1.displayage();
	cout<<"\n\nCountry : ";p1.displaycountry();
	
	
	return 0;
}
