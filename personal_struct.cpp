#include <iostream>

using namespace std;

struct personalData
{
	string name;
	string surname;
	string telephoneNumber;
	short age;
}a,b;

void test(personalData *);

int main()
{
	personalData person[4];
	person[0].name = "Balaji";
	person[1].name = "Balaji First instance";
	person[0].surname = "Sampath";
	person[0].telephoneNumber = "(607) xxx-xxxx";
	person[0].age = 45;
    cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
    /*
    cout << *person+1 << endl;
    cout << *&person[0].name << endl;
    cout << *&person[1].name << endl;
    cout << person->name << endl;
    cout << person->surname << endl;
    cout << (person+1)->name << endl;
    */
    personalData *p = person;

    cout << p->name << endl;

    test(p);

    cout << p->name << endl;


	return 0;
}

void test(personalData *person)
{
    person->name = "Hello I've changed my name to bAlAjI";
}
