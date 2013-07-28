#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED
#include <iostream>

class Position
{
	int x, y;
public:
	Position(int,int);
	~Position();
	void getPosition() const; // to make it work with const Class ethodname
	//remember to match it in definition too like in declaration/prototype.
	void setPosition(int, int);
};

#endif