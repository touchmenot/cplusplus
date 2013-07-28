//string.h is included in iostream
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter magic triangle rows:";
	int length;
	cin >> length;
	
	for (int i=1;i<=length;i++){
		string stars(i, '*');
		cout << stars << endl;
	}
	return 0;
}