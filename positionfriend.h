#ifndef POSITIONFRIEND_H_INCLUDED
#define POSITIONFRIEND_H_INCLUDED
#include <iostream>

class Position
{	
	//nothing here means private
	int x, y;
public:
	Position(int,int);
	~Position();
	void getPosition() const; // to make it work with const Class ethodname
	//remember to match it in definition too like in declaration/prototype.
	void setPosition(int, int);
	friend void setX(Position,int);
	friend void setY(Position &,int);
};

#endif