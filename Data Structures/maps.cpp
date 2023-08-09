// maps are key value pairs
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["monkey"] = 1;
    m["banana"] = 3;
    m["apple"] = 2;
    m["harp"] = 5;
    cout << m["banana"] << endl; // 3
    if (m.count("tuple"))
    {                           // to check if its key exisit or not{m.count("key")t}
        cout << "dead" << endl;
    }
    else
    {
        cout << "null" << endl;
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}