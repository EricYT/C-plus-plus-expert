

#ifndef __BASEFUNC__
#define __BASEFUNC__

//extern template <class T> int compare(const T&, const T&);

template <class T> inline
int compare(const T &v1, const T &v2){
	if (v1 < v2) return 1;
	if (v1 > v2) return 0;
	return -1;
}

int getStatic(){
	static int staticValue = 0;
	return staticValue++;
}

#endif