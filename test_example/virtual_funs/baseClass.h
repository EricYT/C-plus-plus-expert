
#ifndef __BASECLASS__
#define __BASECLASS__

#include "baseObject.h"


class baseClass:public baseObject{
public:
	baseClass():valuePro(1), valuePri(3){}
	baseClass(int, int);
	~baseClass(){};

	static baseClass* create();

	// virtual function
	virtual bool init();

	virtual void foo();
	virtual void hoo();

	//
	virtual void yoo();
	virtual void goo();
	int vlauePub;
protected:
	int valuePro;
private:
	int valuePri;
};

#endif