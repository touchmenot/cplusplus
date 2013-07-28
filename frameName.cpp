#include <iostream>
#include <string>
using namespace std;

int main(){
	cout <<"Enter your name:";
	string name;
	cin >> name;

	/*cannot + two string literals, + is a binary operator, string is interpreted 
	 *as const char
	 *frameName.cpp:12: error: invalid operands of types ‘const char [8]’ 
	 *and ‘const char [2]’ to binary ‘operator+’
	 */
	string greeting = "Hello, " + name + "!";
	//constructors
	string spaces(greeting.size(), ' ');
	string stars(greeting.size(), '*');

	cout << "**" << stars << "**" << endl
	     << "* " << spaces << " *" << endl
	     << "* " << greeting << " *" << endl
	     << "* " << spaces << " *" << endl
	     << "**" << stars << "**" << endl;
}