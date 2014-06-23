

#ifndef __CLASSPERSION__
#define __CLASSPERSION__

#include <string>
#include "baseClass.h"

class persion:public baseClass{
public:
	persion();
	~persion();

	std::string getName() const;
	void testFile();
	virtual void testVirtualFun();

	// virtual function
	virtual void foo();
	virtual void hoo();

	virtual void goo();

private:
	std::string name;
};

#endif