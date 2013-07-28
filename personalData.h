/*
g++ -gdwarf-2 -g3 -m32 classes.cpp personalData.h personalData.cpp -o classes
*/

#ifndef PERSONALDATA_H_INCLUDED
#define PERSONALDATA_H_INCLUDED

class personalDataClass
{
private:
	//only within the class
	short age;
	int *p; 
	
public:
	//anywhere provided instance of class
	personalDataClass(); //constructor
	personalDataClass(short);
	~personalDataClass();
	void setAge(int age);
	short getAge(){return age;}
};


#endif