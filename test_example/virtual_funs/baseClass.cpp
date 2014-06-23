

#include "baseClass.h"
#include<iostream>

using namespace std;


// virtual function
void baseClass::foo(){
	cout << "Class baseClass" << endl;
	baseClass::hoo();
}

void baseClass::hoo(){
	cout << "Class baseClass hoo" << endl;
}

void baseClass::yoo(){
	cout << "Class baseClass yoo" << endl;
	goo();
}