#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

class B; //there is a class coming just know compiler

class A
{
	int secondtmp;
	//secondtmp cannot be changed by class B because class
	//class A doesn't think that Class B is its friend
public:
	void setSecretValue(B &, int);

};

class B
{
	friend class A;
	/* if above line is commented
	 * test.h: In member function ‘void A::setSecretValue(B&, int)’:
	 * test.h:16: error: ‘int B::secretValue’ is private
	 * test.cpp:6: error: within this context
	 */
	int secretValue; //private by default
public:
	int getSecretValue(){return secretValue;}
};

#endif

