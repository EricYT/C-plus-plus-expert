
#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <assert.h>

using namespace std;
extern void testExtern();

/* A test file for c++*/

class Person{
	public:
		Person();
		string getName() const{
			return name;
		}
		string getAddress() const{
			return address;
		}
	private:
		string name;
		string address;
};

void reset(int *p);

const int *maxOne(const int *val1, const int *val2);

int factorial(int val);

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

	int i; double d;
	i = d = 1.5;
	cout << i << " " << d << endl;
	
	d = i = 2.5;
	cout << i << " " << d << endl;

	int flag = 0;
	if (flag){
		cout << "true" << endl;
	}else if (!flag){
		cout << "false" << endl;
	}
	
	vector<int> vecInt;
	vector<int>::size_type size = 11;
	while (size > 0)
		vecInt.push_back(--size);

	vector<int>::iterator vecIter = vecInt.begin();
	while (vecIter != vecInt.end())
		cout << *vecIter++ << endl;

	int i1 = 12;
	int j = 13;
	cout << ((i1 < j) ? i1: j )<< endl;

	int *pInt = new int(1);
	cout << "pInt value:" << *pInt << endl;
	cout << pInt << endl;

	delete pInt;
	// pInt = NULL;
	//*pInt = 2; //free segment faild
	cout << pInt << endl;

	pInt = new int(2);
	cout << "pInt value:" << *pInt << endl;

	int testI = 0;
	const int testJ = 0;
	const int &testIP = testI;
	const int *p = &testJ;

	testI = 2;

	cout << testIP << endl;

	/*
	int switchI = 0;
	while (cin>>switchI){
		switch(switchI){
		case 1:
			{
			int swaitchLocal = 1;
			cout << ">>:1" << endl;
			}
//			break;
		case 2:
			cout << ">>:2" << endl;
			break;
		case 3: case 4: case 5: case 6:
			cout << ">>:3,4,5,6" << endl;
			break;
		default:
			int switchLocal2 = 2;
			cout << ">>:default" << endl;
		}
	}
	*/

	int *val = new int(10);
	int *val1 = new int(11);
	cout << "Point: " << val << " Value: " << *val << endl;
	reset(val);
	cout << "Point: " << val << " Value: " << *val << endl;

	const int *max = maxOne(val, val1);
	cout << "Max one: " << *max << endl;

	cout << factorial(5) << endl;

	system("pause");
	return 0;
}


void reset(int *p){
	*p = 123;
	p = 0;
}


const int *maxOne(const int *val1, const int *val2){
	return *val1 > *val2? val1:val2;
}

int factorial(int val){
	if (val > 1)
		return val * factorial(val-1);
	return 1;
}
