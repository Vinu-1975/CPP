#include <iostream>
using namespace std;

class binary
{
    private:
    string s;   //its private by default
    void check_binary();
public:
    void read(void);
    void complement();
    void display();
};

void binary ::read(void)
{
    cout << "enter the number:" << endl;
    cin >> s;
}

void binary::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary number!." << endl;
            exit(0);
        }
    }
}

void binary ::complement()
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary n;
    n.read();
    n.complement();
    n.display();
}