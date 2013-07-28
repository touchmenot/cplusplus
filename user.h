/*
g++ -gdwarf-2 -g3 -m32 mainuser.cpp user.cpp user.h -o mainuser
*/
#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

class User
{
private:
	int id;
	static int counter;
public:
	User();
	~User();
	int getID(){return id;}
	static int getCounter(){return counter;}
	//static things need to be accessed without an instance of the class.
	//so it should work like class::getCounter()
};

#endif 
