#include <iostream>
#include <iterator>
using namespace std;

#define SIZE 10

int stack[SIZE], top = -1;

void push(int);
void pop();
void display();

int main()
{
    int choice;
    while (1)
    {
        cout << "1.push\n2.pop\n3.display\n4.exit\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter value: ";
            int x;
            cin >> x;
            push(x);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            display();
        }
        else
        {
            break;
        }
    }
}

void push(int x)
{
    if (top == SIZE - 1)
    {
        cout << "stack is full!" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
        cout << "insertion successful!" << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "stack is empty!" << endl;
        ;
    }
    else
    {
        cout << "removed! : " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "stack is empty!" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
    }
    cout << endl;
}