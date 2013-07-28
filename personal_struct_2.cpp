#include <iostream>

using namespace std;

struct personalData
{
	string name;
	string surname;
	string telephoneNumber;
	short age;
}a[4];
//0 , 1 , 2 , 3


int main()
{   
    personalData *t=a;
    //for storing 5 records
    //http://cseweb.ucsd.edu/~j2lau/cs5a/week8.html
    for (int i=0;i<4;i++) // 0,1,2,3 remember not to use 5 when pointer's depth is only a[4], and segmentation fault will be created. if i<5 is used.
    {  
        cout << i;
        (t+i)->name = "Geetha";
        (t+i)->surname = "sampath";
        (t+i)->telephoneNumber = "227";
        (t+i)->age = 44 + i;

        cout << a[i].name << endl;
        cout << a[i].surname << endl;
        cout << a[i].telephoneNumber << endl;
        cout << a[i].age << endl;

        //after every iteration increment t - pointer arithmetic
        //remember *(t+1) NOT , t has the address so t+1 would do it
    }

	return 0;
}

