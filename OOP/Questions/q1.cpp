#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Inventory
{
private:
    string item_name;
    int ItemID;
    int price;
    int stock;
    int reorder_point;
    int minimum_order;
    int order_amount;
    static int count;

public:
    Inventory()
    {
        count++;
    }
    Inventory(string a, int b, int c, int d, int e, int f)
    {
        item_name = a;
        ItemID = b;
        price = c;
        stock = d;
        reorder_point = e;
        minimum_order = f;
    }
    void read()
    {
        cout << ItemID;
        cout << item_name;
        cout << price;
        cout << stock;
        cout << reorder_point;
        cout << minimum_order;
    }
    void calc_amount()
    {
        if (stock < reorder_point)
        {
            order_amount = reorder_point + minimum_order - stock + 1;
        }

        else
        {
            order_amount = 0;
            count++;
        }
    }
    void print_amount()
    {
        if (stock < reorder_point)
        {
            cout << item_name << endl
                 << order_amount << endl;
        }
    }
    static int pcnt()
    {
        return count;
    }
};

int Inventory::count; // 0

int main()
{
    int n;
    cin >> n;
    vector<Inventory> a;
    string name;
    int id, price, stock, reorder_point, minimum_order;
    for (int i = 0; i < n; i++)
    {
        // cin.clear();
        cin >> name;
        cin >> id >> price >> stock >> reorder_point >> minimum_order;
        a.push_back(Inventory(name, id, price, stock, reorder_point, minimum_order));
    }

    for (int i = 0; i < n; i++)
    {
        a[i].calc_amount();
    }
    cout << Inventory::pcnt() << endl;
    for (int i = 0; i < n; i++)
    {
        if (Inventory::pcnt() == n)
        {
            cout << "all items are available" << endl;
        }
        else
        {
            a[i].print_amount();
        }
    }
}