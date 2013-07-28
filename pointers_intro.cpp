#include <iostream>

using namespace std;

//pointers are ordinary variables that can store addresses of variables
// * of something always has an address stored. REMEMBER

int main()
{
	int var;
	int a = 20;
	cout <<"Garbage"<<var<<"address"<<&var<<endl;
	var=5;
	cout << *&var<<"address"<<&var<<endl;
	int *p;
	p = &var;
	cout <<*p<<"address"<<p<<endl;
	*p=20;
	cout << "Value changed by pointer" << var<<"address"<<p<<endl;
	p=&a;
	cout << "changed the value of a by pointer from "<<a<<endl;
	*p=60;
	cout << a<<endl;
	int * const q = &var; // cant change any other variable value ther than var.
	//q has only control over var.
	*q= 100;
	cout << var << "changed by constant pointer q which has contorl over var only"<<"address"<<q<<endl;;
	cout<<endl<<endl<<endl;
	//pointer also has an address ;)
	int shit = 10;
	int *ordinary_shit = &shit;
	cout << "address where shit is stored" << ordinary_shit << "Value shit is storing" <<*ordinary_shit << "where shit is stored" << &shit << endl;

	int **pointer_pointing_to_address_of_pointer = &ordinary_shit;
	int ***dbl = &pointer_pointing_to_address_of_pointer;
	cout << "where ordinary shit pointer is stored" <<  pointer_pointing_to_address_of_pointer << endl;
	cout << "pointer_pointing_to_address_of_pointer where is it stored ?? " << dbl << endl;
	return 0;
	//const int *p = &var // cannot change the value that its pointing to .
	// const int const *p cannot change value and cannot change value.
}

/* bottom line
 * int a = 10;
 * int *p;
 * p = &a
 * *p = 20 changes value of a
 * b = 10;
 * int const *q = &b;
 * *q = 60 would change the value of b
 * q cannot change the value of a, i.e q = &a would result in an error;but can change the value of b
 * const int const *q = &b; 
 * this cannot change the value of b nor can it be pointed to a.
 * a pointer also has an address where its stored.
 * to retreive that you would use int **dbl = &p
 */