#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(10);               // size 10 with intial value"s" 0;{0,0,0,0,0,0,0,0,0,0}
    vector<int> v2(10, 5);            // size 10 with intial value"s" 5;{5,5,5,5,5,5,5,5,5,5}
    vector<int> v3 = {5, 4, 3, 2, 1}; // creates  vector with these 5 elements
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    cout << endl;
    cout << "displaying v1 method1" << endl;
    for (int i = 0; i < v1.size(); i++)
    { // method 1
        cout << v1[i] << " ";
    }
    cout << endl
         << endl;
    ;
    cout << "displaying v2 method2" << endl;
    for (auto x : v2)
    { // method 2
        cout << x << " ";
    }
    cout << endl
         << endl;
    cout << "displaying v method3" << endl;
    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl
         << endl;
    cout << "displaying v3 method3" << endl;
    for (auto x : v3)
    {
        cout << x << " ";
    }
    cout << endl
         << endl;
    cout << "adding element 5 at the end of v3" << endl;
    v3.push_back(5);
    for (auto x : v3)
    {
        cout << x << " ";
    }

    cout << "deleting element 5 at the end of v3" << endl;
    v3.pop_back();
    for (auto x : v3)
    {
        cout << x << " ";
    }
}