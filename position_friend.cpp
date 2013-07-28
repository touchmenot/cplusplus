#include "position_friend.h"

using namespace std;

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}

Position::~Position()
{

}

void Position::getPosition() const
{
	cout << "x :" << x <<endl;//notice that this is not required here 
	cout << "y :" << y <<endl;// you are only accessing and not storing
}

void Position::setPosition(int x, int y)
{
	this->x = x; // here you want to make sure 
	this->y = y; // to use this else the x and y are local here.
}