/*
g++ -gdwarf-2 -g3 -m32 main_position_friend.cpp positionfriend.cpp positionfriend.h -o main_position_friend
*/
#include "positionfriend.h"

using namespace std;

void setX(Position, int);
void setY(Position &, int);

int main()
{
	Position dog(10, 50);

	dog.getPosition();
	dog.setPosition(50,100);
	dog.getPosition();
	cout << "original address of dog---------------------" << &dog << endl;
	setX(dog, 1000);
	cout << "THUS this function didn't change my value after setX" << endl;
	dog.getPosition();
	setY(dog, 10000);
	cout << "THUS this function **CHANGED** my value after setY" << endl;
	dog.getPosition();
	const Position house(100,200); 
	//house.getPosition();
	cout << "MORAL OF THE STORY - TRY TO CHECK IF YOUR OBJECT IS SETTING WHAT YOU WANTED TO BE SET, CHECK ADDRESS ALWAYS GOOD IDEA." << endl;
	return 0;

}

void setX(Position obj, int value)
{
	cout << "address of dog when called without reference---" << &obj << endl;
	obj.x = value;
}

void setY(Position &obj, int value)
{
	cout << "address of dog when called with REFERENCE-----" << &obj << endl;
	obj.y = value;
}