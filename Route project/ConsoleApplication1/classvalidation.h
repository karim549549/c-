#include<iostream>
#include<string>
using namespace std;

class validation {
public:
	bool validname(string name) {
		bool truename = true;
		if (size(name) > 4 && size(name) < 21) {
			for (int i = 0;i <= size(name);i++) {
				if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
					truename = true;
				else {
					truename = false;
					break;
				}
		}
	}
		return truename;
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
