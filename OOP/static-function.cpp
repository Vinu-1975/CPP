#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "ENter the id" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is: " << id << "and this is employee number:" << count << endl;
    }
    static void getCount(){
        cout<<"the number of employees are "<<count<<endl;
    }
};

int Employee::count; // default value of count is zero 0.

int main()
{
    Employee vinayak, aswin, sidharth;
    vinayak.setData();
    vinayak.getData();
    Employee::getCount();//to use static functions

    aswin.setData();
    aswin.getData();
    Employee::getCount();


    sidharth.setData();
    sidharth.getData();
    Employee::getCount();

    return 0;
}