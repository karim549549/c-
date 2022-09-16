#include<iostream>
#include<string>
using namespace std;

class validation {
public:
	bool validname(string name){
		if (size(name) > 4 && size(name) < 21)
			return true;
		else
			return false;
	}
	bool validpass(string pass) {
		if (size(pass) > 7 && size(pass) < 21)
			return true;
		else
			return false;
	}
	bool validclientbalance(double balance) {
		if (balance < 1499)
			return true;
		else
			return false;
	}
	bool validsalary(double salary) {
		if (salary > 4999)
			return true;
		else
			return false;
	}

};