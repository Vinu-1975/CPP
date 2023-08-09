#include <iostream>
using namespace std;

class shop
{
    int Itemid[100];
    int Itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice()
{
    cout << "enter the Id of item no." << counter + 1 << endl;
    cin >> Itemid[counter];
    cout << "enter price of item id " << Itemid[counter] << endl;
    cin >> Itemprice[counter];
    counter++;
}

void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item id " << Itemid[i] << " is " << Itemprice[i] << endl;
    }
}

int main()
{
    shop kada;
    kada.initcounter();
    kada.setPrice();
    kada.setPrice();
    kada.setPrice();
    kada.displayPrice();
}
