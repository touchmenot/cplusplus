#include "position.h"

using namespace std;

int main()
{
	Position dog(10, 50);

	dog.getPosition();
	dog.setPosition(50,100);
	dog.getPosition();

	const Position house(100,200); // do you want you move your house NOOOO
	//without const after the constructor in the class it will
	//crap out so you have to void getPosition() const; const in the end

	house.getPosition();
	//house.setPosition(300,400); //should error out here.
	//if the line above is uncommented the follwing error:
	/*Matrix-2:Udemy balajisampath$ g++ -gdwarf-2 -g3 -m32 mainposition.cpp position.cpp position.h -o mainposition
	 *mainposition.cpp: In function ‘int main()’:
	 *mainposition.cpp:18: error: passing ‘const Position’ as ‘this’ argument of ‘void Position::setPosition(int, int)’ discards qualifiers
	 */
	house.getPosition();
	cout << "LOOK HOUSE CAN'T MOVE******* CONST DEFINE AND DECLARE CONSTRUCTOR, thanks to this commented line //house.setPosition(300,400);" << endl;

	return 0;

}