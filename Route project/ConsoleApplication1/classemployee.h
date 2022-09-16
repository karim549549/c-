#include<iostream>
#include<string>
#include"classpersom.h"
using namespace std;

class employee :public person{
public:
	employee(){}
	employee(string name, string pass, int id, double balance) :person(name, pass, id, balance) {}


	void displayinfo() {
		display();
	}
};
