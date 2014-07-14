

#include "baseClass.h"
#include<iostream>

using namespace std;


baseClass::baseClass(int v1, int v2):valuePro(1), valuePri(2)
{
	valuePro = v1;
	valuePri = v2;
	vlauePub = v2;
}

baseClass* baseClass::create(){
	baseClass *pBaseClass = new baseClass;
	if (pBaseClass && pBaseClass->init()){	
		return pBaseClass;
	}
	delete pBaseClass;
	return NULL;
}

bool baseClass::init(){
	valuePro = 1;
	valuePri = 2;
	vlauePub = 3;
	return true;
}


// virtual function
void baseClass::foo(){
	cout << "Class baseClass" << endl;
	baseClass::hoo();
}

void baseClass::hoo(){
	cout << "Class baseClass hoo" << endl;
	cout << valuePri << endl;
	cout << valuePro << endl;
}

void baseClass::yoo(){
	cout << "Class baseClass yoo" << endl;
	goo();
}

void baseClass::goo(){}