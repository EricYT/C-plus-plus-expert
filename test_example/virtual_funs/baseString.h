

#ifndef __BASESTRING__
#define __BASESTRING__

#include <string>


/* Test for const value */

class baseString{
public:
	char *m_str;
	baseString(){
		m_str = 0;	
	}

	baseString(char *str){
		m_str = str;
	}

	const char &operator[](std::size_t position)const{
		return m_str[position];
	}

/*	char &operator[](std::size_t position){
		return const_cast<char&>(
			static_cast<const baseString&>(*this)[position]);
	};
	*/
	char &operator[](std::size_t position){
		return m_str[position];
	}

	char *getString()const{
		return m_str;
	}

private:
//	char *m_str;
};


#endif