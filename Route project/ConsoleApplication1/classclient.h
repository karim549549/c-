#include<iostream>
#include<string>
#include"classpersom.h"
using namespace std;

class client:public person {
	double balance;
public:
	client(){}
	client(string name,string pass,int id,double balance):person(name,pass,id) {
		if(validclientbalance(balance) == true)
			this->balance = balance;
		else
		{
			cout<<"error";
		}
	}
	void deposit(double amount) {
		balance += amount;
		cout << "successfull transaction" << endl;
	}
	void withdraw(double amount) {
		balance -= amount;
		cout << "successfull transaction" << endl;
	}
	void transferto(double amount, client s) {
		withdraw(amount);
		s.deposit(amount);
		cout << "successfull transaction" << endl;
	}
	void checkbalance() {
		cout << "balance : " << balance << endl;
	}
	void displayinfo() {
		display();
	}
};