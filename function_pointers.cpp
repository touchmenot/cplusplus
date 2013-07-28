#include <iostream>

using namespace std;
/*
void multiplyBy(int &, int);

int main()
{
	int a = 10;
	multiplyBy(a,5);
	return 0;
}

void multiplyBy(int &var, int amount)
{
	var *= amount;
}
*/

void multiplyBy(int *, int);

int main()
{
	int a = 10;

	int *b = multiplyBy(&a,5);
	*b = 999;
	cout << a << endl;
	cout << *b << endl;
	return 0;
}

int *multiplyBy(int *var, int amount)
{
	*var = *var * amount;
	return *var;
}