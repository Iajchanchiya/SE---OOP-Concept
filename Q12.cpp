#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited " << amount << " successfully. New balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Amount must be greater than 0." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " successfully. New balance: " << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount. Amount must be greater than 0 and less than or equal to the balance." << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
	int acbln,acno;
	char ch;
	
	std::cout << "\n Enter Account No: ";
	std::cin>>acno;
	std::cout << "\nEnter Account balance: ";
	std::cin>>acbln;
	
    BankAccount myAccount(acno,acbln);

    std::cout << "Account balance: " << myAccount.getBalance() << std::endl;

	std::cout<<"\n\nDeposit \n\nWithdraw\n\nCheck Balance : ";
	std::cin>>ch;
	
		
	switch(ch)
	{

		case 'd':
			{
				myAccount.deposit(500.0);
				break;
			}
		case 'w':
			{
				myAccount.withdraw(200.0);
				break;
			}
		default:
			{
				std::cout << "Enter Valid Choice";
				break;
			}
	}
    
    std::cout << "\n\nFinal balance: " << myAccount.getBalance() << std::endl;

    return 0;
}

