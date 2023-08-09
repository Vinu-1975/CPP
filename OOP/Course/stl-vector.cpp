#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(0); // to append elements

    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(i);
    }

    // to access elements in a vector
    // method 1

    // for (int i : numbers)
    // {
    //     cout << i << endl;
    // }

    // method 2

    // for (auto i = numbers.begin(); i != numbers.end(); i++)
    // {
    //     cout << *i << endl;
    // }

    // auto it = numbers.begin();
    // cout << *(it + 5) << endl;//element at index 5

    // some important functionalities

    // cout << numbers.size() << endl;
    // cout << numbers.max_size() << endl;
    // cout << numbers.capacity() << endl;

    // numbers.resize(5);
    // cout << numbers.size() << endl;

    // if (numbers.empty())
    // {
    //     cout << "vectors is empty\n";
    // }
    // else
    // {
    //     cout << "vector is not empty\n";
    // }

    // cout << numbers[0] << endl;
    // cout << numbers.at(0) << endl;

    // cout << numbers.front() << endl; // first element
    // cout << numbers.back() << endl;  // last element
    // numbers.clear();
    // cout << numbers.size() << endl;

    // to insert element at a specific position

    numbers.insert(numbers.begin() + 5, 88);

    for (auto i : numbers)
    {
        cout << i << endl;
    }
    // to delete at a specific position
    numbers.erase(numbers.begin() + 4);

    for (auto i : numbers)
    {
        cout << i << endl;
    }
    // to delete last element
    numbers.pop_back();
}