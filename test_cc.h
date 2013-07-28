#ifndef TEST_CC_H_INCLUDED
#define TEST_CC_H_INCLUDED
#include <iostream>
using namespace std;

class Test
{
public:
	int x;
	int y;
	int *p;
	Test(int,int,int);
	Test(const Test&); //comment this line and the definition in test_cc.cpp, you can see
	// that Test(int,int,int) is invoked once and implicity copy just assigns all the values to obj2. obj2=obj1 
	~Test();
};

#endif