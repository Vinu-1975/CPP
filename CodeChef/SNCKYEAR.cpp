#include <iostream>
using namespace std;

class hyear
{
public:
    void chckyr(int a)
    {
        if (a == 2010 || a == 2015 || a == 2016 || a == 2017 || a == 2019)
        {
            cout << "HOSTED\n";
        }
        else
        {
            cout << "NOT HOSTED\n";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        hyear m;
        int n;
        cin >> n;
        m.chckyr(n);
    }
}