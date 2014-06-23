
#ifndef __BASECLASS__
#define __BASECLASS__

#include "baseObject.h"


class baseClass:public baseObject{
public:
	baseClass(){};
	~baseClass(){};

	// virtual function
	virtual void foo();
	virtual void hoo();

	//
	virtual void yoo();
};

#endif