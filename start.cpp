#include <iostream>
#define PI 3.14159
//using namespace std;

float area_of_circle(float radius){
	return float(PI * radius * radius);
}

int main() {
	char yourname[100];
	float area;
	std::cout << "Enter your name:";
	std::cin >> yourname;
	std::cout << "Hello, " << yourname << " Welcome"<< std::endl;
	area=area_of_circle(1.0);
	std::cout << "Area of a Unit Circle " << area << std::endl; 
	return 10; 
}

