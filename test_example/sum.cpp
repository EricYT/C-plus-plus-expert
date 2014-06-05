
#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;
extern void testExtern();

/* A test file for c++*/

class testClass{

};

int main(){
/*	string hello = "hello";
	string world("world");
	int sum = 0;
	extern const int maxValue;
	extern int maxVal;
	const int test = sum;
	// reference
	int &maxSum = sum;

	maxSum = 100;
	
	if ("hello" == hello){
		cout<<"equal"<<endl;
	}else{
		cout<<"Not equal"<<endl;
	}

	// Const values
	//const int maxValue = 10;

	for (int index = 0; index != maxValue ; index++)
		sum += index;

	int &sumRef = sum;
	sumRef = 100;

	double i = 3.14;
	const int &refI = i;
	const int &refI1 = i + 1;

	typedef int kType;
	kType k = 3.14;

	enum Points {pointOne = 1, pointTwo = 2, pointThree = 1};

	Points pon1 = pointTwo;

	cout << pon1 << endl;
	cout << k << " " << refI << " " << refI1 <<endl;
	cout << sum << endl;
	cout << maxVal << endl;
	cout << test << endl;
	cout << hello << " " << world << endl;

	testExtern();

	/*
	string words;
	while (cin >> words){
		cout << words << endl;
	}

	string line;
	while (getline(cin, line))
		cout << line << endl;
	*/
	/*
	string s1 = "hello";
	string s2 = s1 + " " + "world" + "!";
	cout << s2 << endl;
	cout << s1.size() << endl;

	for (string::size_type sSize = 0;sSize != s1.size();sSize++)
		cout << s1[sSize] << endl;

	vector<int> vInt(10, 1);

	for (vector<int>::size_type vSize = 0;vSize != vInt.size();vSize++)
		cout << vInt[vSize] << endl;
	vector<string> vString;
	cout << vString.empty() << endl;


	vector<int>::iterator iter = vInt.begin();

	if (vInt[0] == *iter){
		cout << "vInt[0] == *iter" << endl;
	}

	vector<int>::size_type index = 0;
	for( ;iter != vInt.end(); iter++){
		cout << *iter << endl;
		*iter = index++;
	}

	vector<int>::const_iterator constIter = vInt.begin();
	for ( ; constIter != vInt.end(); constIter++){
		cout << *constIter << endl;
	}

//	vector<int>::iterator mid = (vInt.begin() + vInt.end())/2;
//	c++ does not define the method add between two iterators.
	string s("hello world");
	string *sp = &s;
	cout << *sp << endl;

	int value = 1024;
	int *p1 = &value;
	int **p2 = &p1;
	cout << "value " << value << endl
		 << "p1 " << *p1 << endl 
		 << "p2 " << **p2 << endl;

	cout << &value << " " << p1 << " " << *p2 << " " << p2 << endl;

	const char *cp = "hello world";
	while (*cp){
		cout << *cp++ << endl;
	}

	char arr[] = {'a', 'b', 'c', '\0'};
	cout << strlen(arr) << endl;

	*/
	int *arrPtr = new int[10]();
	int *ptr1 = arrPtr;
	for(; ptr1 != arrPtr+10; ptr1++){
		*ptr1 = 1;
	}
	cout << ptr1 << " " << arrPtr+10 << endl;
	for(ptr1 = arrPtr; ptr1 != arrPtr+10; ptr1++)
		cout << *ptr1 << endl;


	delete [] arrPtr;

	system("pause");
	return 0;
}