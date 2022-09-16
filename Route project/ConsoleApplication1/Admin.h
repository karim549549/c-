#include<iostream>
#include<string>
#include"classpersom.h"
using namespace std;

class admin :public person {
public:
	admin(){}
	admin(string name, string pass, int id, double balance) :person(name, pass, id, balance) {}



	void displayinfo() {
		display();
	}
};

