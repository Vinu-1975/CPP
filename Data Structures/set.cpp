#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    set<int> s2 = {2, 3, 5, 7, 11}; // maintains order of elements
    s1.insert(10);                  // same elements wont repeat or distinct elements
    s1.insert(20);
    s1.insert(40);
    s1.insert(40);
    s1.insert(40);
    s1.insert(30);
    s1.insert(40);
    for (auto x : s1)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << s1.count(40) << endl;   //returns count of the element
    s1.erase(40);           //eraseing element 40
    cout << s1.count(40) << endl;
    

}