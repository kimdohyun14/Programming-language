#include "BankingCommonDecl.h"
#include "Account.h"
#include "AccountException.h"

Account::Account(int ID, int money, const String name) // constructor
	:accID(ID), balance(money)
{
	//int len = strlen(name) + 1;
	//cusName = new char[len];
	//strcpy(cusName, name);
	cusName = name;
}

/* 
Account::Account(const Account& copy) // deep copy (copy constructor)
	:accID(copy.accID), balance(copy.balance)
{
	cusName = new char[strlen(copy.cusName) + 1];
	strcpy(cusName, copy.cusName);
}
*/

/*
// 대입 연산자 오버로딩
Account& Account::operator=(const Account& ref)
{
	accID = ref.accID;
	balance = ref.balance;
	
	delete[] cusName; // 기존에 가리키는 문자열은 할당 해제하고,
	cusName = new char[strlen(ref.cusName) + 1];
	strcpy(cusName, ref.cusName);
	return *this;
}
*/

int Account::GetAccID() const
{
	return accID;
}

int Account::Withdraw(int money)
{
	if (money < 0)
		throw MinusException(money);

	if (balance < money)
		throw InsuffException(balance, money);

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "계좌ID: " << endl;
	cout << "이  름: " << cusName << endl;
	cout << "잔  액: " << balance << endl;
}

void Account::Deposit(int money)
{
	if (money < 0)
		throw MinusException(money);

	balance += money;
}

/*
Account::~Account()
{
	delete[] cusName;
}
*/