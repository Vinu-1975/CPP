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
};

int Employee::count; // default value of count is zero 0.

int main()
{
    Employee vinayak, aswin, sidharth;
    vinayak.setData();
    vinayak.getData();

    aswin.setData();
    aswin.getData();

    sidharth.setData();
    sidharth.getData();
    return 0;
}