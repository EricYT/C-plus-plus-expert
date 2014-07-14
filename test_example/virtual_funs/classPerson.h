

#ifndef __CLASSPERSION__
#define __CLASSPERSION__

#include <string>
#include "baseClass.h"

class persion:public baseClass{
public:
	persion();
	persion(int, int, const std::string &);
	~persion();

	std::string getName() const;
	void testFile();
	virtual void testVirtualFun();

	// virtual function
	virtual void foo();
	virtual void hoo();

	virtual void goo();

	void overloadFun();
	void overloadFun(float);
	void overloadFun(double);

private:
	std::string name;
};

#endif