/*
g++ -gdwarf-2 -g3 -m32 mainuser.cpp user.cpp user.h -o mainuser
*/
#include <iostream>
#include "user.h"
 
using namespace std;
//static properties and static methods
//can be accessed without an instance of a class 
//REMEMBER INSTANCE IS SOMETHING LIKE User a and then a.methodname()
// here as you can see instance is not required example : User::getCounter()
//its a static method with a static variable.

int main()
{	
	cout << "Intial Counter " << User::getCounter() << endl;
	User a[100];

	for (int i=0; i<(sizeof(a)/sizeof( a[0]));)
	{
		cout << "this is user " << ++i << "'s id " << a[i].getID() << endl;	
	}
	
	cout << "Final Counter " << User::getCounter() << endl;

	return 0;
}