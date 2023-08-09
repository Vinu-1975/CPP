/*

We want to calculate the total marks of each student of a class in Physics,Chemistry and
Mathematics and the average marks of the class. The number of students in the class are
entered by the user. Create a class named Marks with data members for roll number, name and marks.
Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics,
which are used to define marks in individual subject of each student. Roll number of each student
will be generated automatically.

*/
#include <bits/stdc++.h>
using namespace std;

class Marks: public Physics,public Chemistry,public Maths
{
    int roll;
    string name;
    int marks;

public:
    void totalMarks(){
        return Physics::get_mark();
    }
};

class Physics
{
    int mark;

public:
    void get_mark()
    {
        cout << mark << endl;
    }
};
class Chemistry
{
    int mark;

public:
    void get_mark()
    {
        cout << mark << endl;
    }
};
class Maths
{
    int mark;

public:
    void get_mark()
    {
        cout << mark << endl;
    }
};

int main()
{
}