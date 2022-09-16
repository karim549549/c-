#include<iostream>
#include<string>
#include"classvalidation.h"
using namespace std;

class person:public validation {
protected:
	string name,pass;
	int id;
public:
	person(){}
	person(string name, string pass, int id) {
		if (validname(name) == true && validpass(pass) == true) {
			this->name = name;
			this->pass = pass;
			this->id = id;
		}
		else
		{
			cout << "error";
		}
	}
	void setname(string name) {
		if (validname(name) == true)
			this->name = name;
	}
	void setpass(string pass) {
		if (validpass(pass) == true)
			this->pass = pass;
	}
	void setid(int id) {
		this->id = id;
	}
	string getname() {
		return name;
	}
	string getpass() {
		return pass;
	}
	int getid() {
		return id;
	}
	void display() {
		cout << "name :" << name << endl;
		cout << "id :" << id << endl;
	}
};