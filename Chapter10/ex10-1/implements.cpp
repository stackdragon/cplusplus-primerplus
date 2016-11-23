// compile with definitions.h and ex10-1.cpp

#include <iostream>
#include "definitions.h"

BankAccount::BankAccount(const std::string &name, const std::string &accountNum, 
	double balance)
{
	m_name = name;
	m_accountNum = accountNum;
	m_balance = balance;
}

BankAccount::BankAccount() // default constructor
{
	m_name = "No name given.";
	m_accountNum = "No account number given.";
	m_balance = 0;
}

BankAccount::~BankAccount() { }	// destuctor

void BankAccount::deposit(double money)
{
	m_balance += money;
	std::cout << "You deposited $" << money << "." << std::endl;
}

void BankAccount::withdraw(double money)
{
	m_balance -= money;
	std::cout << "You withdrew $" << money << "." << std::endl;
}

void BankAccount::display()
{
	std::cout << "The account balance for " << m_name << " (#" << m_accountNum << ") is "
		<< m_balance << "." << std::endl;
}
