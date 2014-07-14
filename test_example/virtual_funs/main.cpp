

#include <iostream>
#include <string>
#include <stdexcept>
#include "classPerson.h"
#include "baseClass.h"
#include "baseFunc.h"
#include "baseString.h"


#define STRING_CONCATE(X, Y) X##Y
#define TOSTRING(X) #X
#define STRING_CONCATE1(X, Y) X##+##Y


using namespace std;

void main(){
	
	string val = "nihao";
	STRING_CONCATE(va,l) = "world";
	//val = "world";

	cout << STRING_CONCATE(va,l) << endl;
	cout << TOSTRING(STRING_CONCATE(va,l)) << endl;
	cout << TOSTRING(val) << endl;

	cout << STRING_CONCATE1(1, 2) << endl;



	const baseString *basePtr = new baseString("hello");
	baseString *basePtrTwo = new baseString(" world");

	cout << basePtr->getString() << endl;
	cout << (*basePtr)[2] << endl;

	cout << basePtrTwo->getString() << endl;
	cout << (*basePtrTwo)[2] << endl;
	//(*basePtrTwo)[2] = 'a';



/*
	char c = 'a';
	char &cQuote = c;
	cout << cQuote << endl;
	cQuote = 'b';
	cout << cQuote << endl;
	cout << c << endl;

	/* A test file for class 
{	class persion *newPersion = new persion(34, 45, "aoteman");
//	newPersion->foo();

	class baseClass *baseClassPtr = newPersion;
//	baseClassPtr->foo();

	//baseClassPtr->yoo();

	void (persion::*funPtr)();
	funPtr = &persion::overloadFun;
	(newPersion->*funPtr)();
	
	//newPersion->baseClass::foo();

	//newPersion->overloadFun(1.0);

	try{
		throw exception("error logic");
		throw runtime_error("Data error");
	}catch(runtime_error error){
		cout << error.what() << endl;
	}catch(exception error){
		cout << error.what() << endl;
	}

	cout << compare(1, 2) << endl;
//	cout << compare("nihao", "haoo") << endl;

	baseClass * basePtr = new baseClass(9, 10);
	basePtr->hoo();

	newPersion->testFile();
	cout << (*newPersion).vlauePub << endl;

	for (int index=1; index != 10 ; index++)
		cout << getStatic() << endl;

	baseClass *pBaseClass = baseClass::create();
	pBaseClass->hoo();

	cout << true << false << endl;}
	*/

	system("pause");
}




