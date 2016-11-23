// compile with ex10-1.cpp and implements.cpp
#pragma once

// header files
#include <string>

class BankAccount
{
private:
	std::string m_name;
	std::string m_accountNum;
	double m_balance;
public:
	BankAccount(); // default constructor
	BankAccount(const std::string &name, const std::string &accountNum, double balance = 0);
	~BankAccount(); // destructor
	void deposit(double money);
	void withdraw(double money);
	void display();
};
