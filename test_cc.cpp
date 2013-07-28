#include "test_cc.h"
#include <cstddef>
//includes NULL
Test::Test(int x, int y, int value)
{
	this->x=x;
	this->y=y;
	this->p = new int(value); 
	cout << "I'm in the default constructor" << endl;
	//this is different from new p[20], this p(value)
	//would hold the value in 4 bytes whereas p[20] would create 20*4 bytes.
}

Test::~Test()
{
	cout << "Value of p"<< p << endl;
	if (p!=NULL)
	{	
		delete p;
		p=NULL;
		cout << "p was deleted, value:" << p << endl;
	}	
}

Test::Test(const Test &obj)
{
	this->p = new int(*obj.p);
	this->x = obj.x;//to prevent the implicit copy constructor
	this->y = obj.y;//to prevent the implicit copy constructor
}