#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "size: ";
    cin >> size;
    int *myarray = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] :";
        cin >> myarray[i];
    }

    for (int i = 0; i < size; i++)
    {
        // cout << myarray[i] << " ";
        cout << *(myarray + i) << " ";
    }

    //have to deallocate after use of dynammic array
    delete[] myarray;
    myarray = NULL;
}