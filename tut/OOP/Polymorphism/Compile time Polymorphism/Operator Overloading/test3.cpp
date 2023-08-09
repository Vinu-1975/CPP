#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int mark;

public:
    bool operator<(student &s)
    {
        return mark < s.mark;
    }
    student(string name, int mark)
    {
        this->name = name;
        this->mark = mark;
    }
    
    void show()
    {
        cout << "name:" << name << " marks:" << mark << endl;
    }
};

int main()
{
    vector<student> v;
    for (int i = 0; i < 2; i++)
    {
        string a;
        int b;
        cout << "enter name:";
        cin >> a;
        cout << "enter mark:";
        cin >> b;
        v.push_back(student(a, b));
    }
    for (int i = 0; i < 2; i++)
    {
        v[i].show();
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 2; i++)
    {
        v[i].show();
    }
}