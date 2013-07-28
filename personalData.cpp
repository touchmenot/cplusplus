/*
g++ -gdwarf-2 -g3 -m32 classes.cpp personalData.h personalData.cpp -o classes
*/
//having a setter method can make sure that value is valid
//else if age was public i can set age to be -55.
//this is address of instance of class ********************
#include "personalData.h"
#include <iostream>

using namespace std;

void personalDataClass::setAge(int age)
{
	if (age < 0)
		this->age = 0; //sets the private value in the class short age.****
	else
		this->age = age;
}

personalDataClass::personalDataClass()
{
	//constructs our objects.
	static int i = 0; // this would not change even if the constructor is invooekd twice.
	cout << "constructor has just been invoked " << ++i << endl;
	age = 10;

	p = new int[5]; //dynamic has to be deleted.
	cout << p << endl;
	//after pointer operation make p null

}

personalDataClass::personalDataClass(short age)
{
	cout << "this is different constructor" << endl;
	this->age = age;
	//p = new int[5]; // commenting this line would bring you up malloc errors use gdb you would understand, here's the results anyway: it is trying to delete
	// an unpointing place in the destructor since new memory blocks was never allocated when this was commented.
	// NOTICE HOW THE COMPILER FREAKS OUT classes(2488) malloc: *** error for object 0x1000: pointer being freed was not allocated SINCE THAT 
	// WAS NEVER ALLOCATED TO BEGIN WITH.
	/*
		(gdb) break malloc_error_break
	Function "malloc_error_break" not defined.
	Make breakpoint pending on future shared library load? (y or [n]) y
	Breakpoint 1 (malloc_error_break) pending.
	(gdb) s
	The program is not being run.
	(gdb) s
	The program is not being run.
	(gdb) start
	Breakpoint 2 at 0x228d: file classes.cpp, line 29.
	Starting program: /Users/balajisampath/Documents/c++/Udemy/classes
	Reading symbols for shared libraries ++......................... done
	Breakpoint 1 at 0x900b6c97
	Pending breakpoint 1 - "malloc_error_break" resolved

	Breakpoint 2, main () at classes.cpp:29
	29		cout << "Hello Universe!" << endl;
	(gdb) s
	Hello Universe!
	31		personalDataClass personClass(20);
	(gdb) s
	personalDataClass::personalDataClass (this=0xbffffb60, age=20) at personalData.cpp:32
	32		cout << "this is different constructor" << endl;
	(gdb) s
	this is different constructor
	33		this->age = age;
	(gdb) s
	37	}
	(gdb) s
	main () at classes.cpp:32
	32		personalDataClass personClass1(50);
	(gdb) s
	personalDataClass::personalDataClass (this=0xbffffb58, age=50) at personalData.cpp:32
	32		cout << "this is different constructor" << endl;
	(gdb) s
	this is different constructor
	33		this->age = age;
	(gdb) s
	37	}
	(gdb) s
	main () at classes.cpp:36
	36		cout << personClass.getAge()<<endl;
	(gdb) s
	personalDataClass::getAge (this=0xbffffb60) at personalData.h:17
	17		short getAge(){return age;}
	(gdb) s
	17		short getAge(){return age;}
	(gdb) s
	20
	main () at classes.cpp:37
	37		cout << personClass1.getAge()<<endl;
	(gdb) s
	personalDataClass::getAge (this=0xbffffb58) at personalData.h:17
	17		short getAge(){return age;}
	(gdb) s
	17		short getAge(){return age;}
	(gdb) s
	50
	main () at classes.cpp:52
	52		return 0;
	(gdb) s
	personalDataClass::~personalDataClass (this=0xbffffb58) at personalData.cpp:42
	42		cout << "destructor has just been invoked " << ++i << endl;
	(gdb) s
	destructor has just been invoked 1
	43		cout << p << " this is p" << endl;
	(gdb) s
	0 this is p
	46		if (p != NULL)
	(gdb) s
	54	}
	(gdb) s
	0x0000238c in main () at classes.cpp:52
	52		return 0;
	(gdb) s
	personalDataClass::~personalDataClass (this=0xbffffb60) at personalData.cpp:42
	42		cout << "destructor has just been invoked " << ++i << endl;
	(gdb) s
	destructor has just been invoked 2
	43		cout << p << " this is p" << endl;
	(gdb) s
	0x1000 this is p
	46		if (p != NULL)
	(gdb) s
	48			delete [] p;
	(gdb) s
	classes(2488) malloc: *** error for object 0x1000: pointer being freed was not allocated
	*** set a breakpoint in malloc_error_break to debug

	Breakpoint 1, 0x900b6c97 in malloc_error_break ()
	(gdb) s
	Single stepping until exit from function malloc_error_break,
	which has no line number information.
	0x900b6e07 in free ()
	(gdb) s
	Single stepping until exit from function free,
	which has no line number information.

	Program received signal SIGABRT, Aborted.
	0x91328332 in __kill ()
	(gdb) s
	*/
}

personalDataClass::~personalDataClass()
{
	static int i =0;
	cout << "destructor has just been invoked " << ++i << endl;
	cout << p << " this is p" << endl;
	//notice that p would have some junk so BEWARE
	// without p = new int[5]; if you are trying to delete you will have problems
	if (p != NULL)
	{
		delete [] p;
		cout << p << " is deleted" << endl;
		p = NULL;
		cout << "After NULLING out p, the value of p now is " << p << endl;
	}
	
}