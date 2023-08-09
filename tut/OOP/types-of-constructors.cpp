#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    bool gender;

public:
    Student()
    {
        cout << "Default Constructor" << endl;
    } // default constructor

    Student(string s, int a, bool g)
    {
        cout << "parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised constructor

    Student(const Student &a)
    {
        cout << "copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // copy constructor - shallow copy and deep copy
    // therefore,better to define our own copy constructor

    ~Student()
    {
        cout << "destructor" << endl;
    } // destructor
};

int main()
{
    Student a("vinayak", 20, 1); // parameterised constructor
    Student b;                   // default constructor
    Student c = a;               // copy constructor
}