#include <iostream>
using namespace std;

class Birthday
{
public:
    Birthday(int d, int m, int y)
        : month(m), day(d), year(y) {}
    void printData()
    {
        cout << day << "/" << month << "/" << year << endl;
    }

private:
    int day;
    int month;
    int year;
};

class Person
{
public:
    Person(string n, Birthday b)
        : name(n), bd(b) {}
    void printInfo()
    {
        cout << name << endl;
        bd.printData();
    };
private:
    string name;
    Birthday bd;
};

int main()
{
    Birthday dob(31, 8, 2003);
    Person p("Vinayak", dob);
    p.printInfo();
}