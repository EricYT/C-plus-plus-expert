

#include "classPerson.h"
#include <iostream>
#include <string>

using namespace std;

persion::persion(){
	name = "nihao";
}

persion::~persion(){

}

string persion::getName() const{
	return name;
}

void persion::testVirtualFun(){
	cout << "just a virtual function test" << endl;
}

void persion::testFile(){
	cout << "hello world" << endl;
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




