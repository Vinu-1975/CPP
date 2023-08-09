#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {17, 14, 14, 12, 8, 6, 4, 3};
    cout << "v before sorting" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
    cout << "v after sorting" << endl;
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());
    cout << "v after reversing" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    random_shuffle(v.begin(), v.end());
    cout << "v after shuffling" << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "prints starting element of vector v" << endl;
    auto it1 = v.begin();
    cout << *it1 << endl;
    cout << "prints end element of vector v" << endl;
    auto it2 = v.end()-1;
    cout << *it2 << endl;
}