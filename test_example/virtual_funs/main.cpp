

#include <iostream>
#include <string>
#include "classPerson.h"
#include "baseClass.h"

using namespace std;

void main(){
	/* A test file for class */
	class persion *newPersion = new persion;
	newPersion->foo();

	class baseClass *baseClassPtr = newPersion;
	baseClassPtr->foo();

	baseClassPtr->yoo();
	
	newPersion->baseClass::foo();
	system("pause");
}