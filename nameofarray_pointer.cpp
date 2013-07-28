#include <iostream>
using namespace std;

int main()
{
	int a[3];
	short int blah;
	int * const p = &a[0];
	a[0] = 20;
	a[1] = 30;
	a[2] = 40;
	cout << a << endl;
	cout << p << endl;
	
	cout << endl << endl << endl;

	cout << &a[0] << endl;
	cout << &a[1] << endl;
	cout << &a[2] << endl;
	
	cout << endl << endl << endl;
	
	cout << a << endl;
	cout << a+1 << endl;
	cout << a+2 << endl;

	cout << endl << endl << endl;
	
	cout << *a << endl;
	cout << *(a+1) << endl;
	cout << *(a+2) << endl;
	// will be garbage if nothing is assigned

	cout << endl << endl << endl;
	
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;

	int *p2 = &a[0];
	cout << endl << endl << endl;
	cout << *p2 << endl;   // 20
 	cout << ++*p2 << endl; // 21
	cout << *++p2 << endl; // 30, 
	cout << *p2++ << endl; // 30 , first brings what's it pointing to and then increments pointer so its in new place
	cout << *p2++ << endl; // 40 or cout << *p2++ << endl; will result in same thing
	cout << *p2 << endl; //-1880313757 will throw out junk since its pointing to garbage and wasn't assined or a[3] is not present.
	cout << *--p2 << endl; // will print 40 and pointing to 40 now
	cout << *p2 << endl; //since its pointing to 40 it will be printed again.
	cout << *p2-- << endl; //first prints 40 and moves pointer down to point to 30
	cout << *p2 << endl; // prints 30
	return 0;
}