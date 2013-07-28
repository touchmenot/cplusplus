/*
g++ -gdwarf-2 -g3 -m32 classes.cpp personalData.h personalData.cpp -o classes
*/

#include <iostream>
#include "personalData.h"

using namespace std;

//class is an extended struct, lot of other toys that structs do not have
/*
struct personalData
{
	short age;
};
*/
//void test()
//{
	//personalDataClass abc[5];
	/* notice something here, new keyword doesn't invoke the destructor.
	once you add delete you can see the destructor being invoked.
	new operator would return the pointer would ALWAYS BE RESERVED FOR US
	UNTIL IT'S DELETED
	*/
	//personalDataClass *pointer = new personalDataClass[5];


	//delete [] pointer;
//}

int main()
{
	cout << "Hello Universe!" << endl;

	personalDataClass personClass(20);
	personalDataClass personClass1(50);
	//test();
	//personClass.setAge(50); constructor would set if this is commented
	//personClass1.setAge(20);
	cout << personClass.getAge()<<endl;
	cout << personClass1.getAge()<<endl;

	/*test(); this will invoke cons and des 5 times.abc is arrary[5]
	 * Hello Universe!
	 * constructor has just been invoked 1
     * constructor has just been invoked 2
	   constructor has just been invoked 3
	   constructor has just been invoked 4
	   constructor has just been invoked 5
	   destructor has just been invoked 1
	   destructor has just been invoked 2
	   destructor has just been invoked 3
	   destructor has just been invoked 4
	   destructor has just been invoked 5
	  */
	return 0;

}