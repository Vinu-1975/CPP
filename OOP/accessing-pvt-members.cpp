#include <iostream>
using namespace std;
class student
{
private:
    int rollno;
    int mark[5];

public:
    void set_roll();
    void get_roll();
    void set_mark()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> mark[i];
        }
    }
    void get_marks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << mark[i] << " ";
        }
    }
};

void student ::set_roll()
{
    cout << "enter rollno : ";
    cin >> rollno;
}
void student ::get_roll()
{
    cout << "rollno : " << rollno << endl;
}

int main()
{
    student s;
    s.set_roll();
    s.get_roll();
    s.set_mark();
    s.get_marks();
}