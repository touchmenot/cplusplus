/*
g++ -gdwarf-2 -g3 -m32 mainuser.cpp user.cpp user.h -o mainuser
*/
#include "user.h"

int User::counter = 20249259;

User::User()
{
	++counter;
	id = counter;
	//this->id only if id was public and outside of the class say in main.cpp

}

User::~User()
{

}
