#include <iostream>
using namespace std;

class serves
{
    int p;

public:
    serves(int n)
    {
        p = n;
    }
    void getServes()
    {
        cout << (p / 2) + 1 << endl;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        serves a(n);
        a.getServes();
    }
}