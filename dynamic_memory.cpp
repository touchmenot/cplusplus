#include <iostream>

using namespace std;

int main()
{
	/*
	int amount;

	cout << "How many numbers would you like to store" << endl;
	cin >> amount;

	int *p = new (nothrow) int[amount]; //dynamic memory assignment be careful to delete the pointer.
	// this means addresses will be different.
	cout << p << endl;
	// IF WE DONT HAVE SPACE THEN POINTER IS ASSIGNED NULL, ELSE
	if (p != NULL)
	{
		for (int i=0; i< amount; i++)
		{
			cout<<"Enter the " << (i+1) << "number:" << endl;
			cin >> p[i];
		}

		for (int i=0; i< amount; i++)
		{
			cout<<"p [" << i << "] =" << p[i] << endl;
		}
	}
	else
		cout << "No enough memory" << endl;
	delete p;
	*/
	{
		int *p = new int;
		cout <<p << endl;
		delete p;
		p = new int;
		cout << p << endl; 
		delete p;
		// same address if you delete it
		//if you dont delete it you wouldn't free up that space and you will get a 
		// new memory space or address.
	}

	return 0;
	
	/* after compiling the memory location changes as seen below
	   cout << new int << endl;
	   Matrix-2:Udemy balajisampath$ ./dynamic_memory
	   0x16bb90
	   Matrix-2:Udemy balajisampath$ ./dynamic_memory
	   0x150e90
	   Matrix-2:Udemy balajisampath$ ./dynamic_memory
	   0x10f2c0
	   Matrix-2:Udemy balajisampath$ ./dynamic_memory
	   0x128f70
	   Matrix-2:Udemy balajisampath$ ./dynamic_memory
	   0x166db0
	*/

	 /* CAREFUL WITH POINTERS
	//p inside block of code.	
	{
		int *p = new int; //dynamic memory so delete.

		*p = 50;
		//delete p;
		// once deleted dont manipulate and then assign it to p = NULL
		// if(p!=NULL)
		//{
			 *p = 60;

		//}
		cout << *p << endl;
	}
	//outside block of code
	cout << p << endl;
	// after deleting p you can use it for another pointer to a variable
	g++ -gdwarf-2 -g3 -m32 dynamic_memory.cpp -o dynamic_memory
	dynamic_memory.cpp: In function ‘int main()’:
	dynamic_memory.cpp:34: error: ‘p’ was not declared in this scope
	 */

	
}