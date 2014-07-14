

#include "classPerson.h"
#include <iostream>
#include <string>

using namespace std;

persion::persion(){
	name = "nihao";
}

persion::persion(int i, int j, const string &nameS):baseClass(i, j), name(nameS){}

persion::~persion(){

}

string persion::getName() const{
	return name;
}

void persion::testVirtualFun(){
	cout << "just a virtual function test" << endl;
}

void persion::testFile(){
	cout << "hello world " << name << endl;
	cout << valuePro << endl;
	baseClass::hoo();
	hoo();
	cout << this->name << endl;
}

void persion::foo(){
	cout << "Class classPerson" << endl;
}

void persion::hoo(){
	cout << "Class classPerson hoo" << endl;
}

void persion::goo(){
	cout << "Class classPerson goo" << endl;
}


void persion::overloadFun(){
	cout << "overloadFun no argument" << endl;
}

void persion::overloadFun(float i){
	cout << "overloadFun float" << endl;
}

void persion::overloadFun(double d){
	cout << "overloadFun double" << endl;
}


