#include<iostream>
using namespace std;

// Static Data Members in C ++

/*• All static data is initialized to zero when the first
    object is created,
    if no other initialization is present.*/

/*• We can't put it in the class definition but it can be
initialized outside the class using the scope
resolution operator :: to identify which class it
belongs to.*/

/*• When we declare a member of a class as static it
means no matter how many objects of the class are
created,there is only one copy of the static member.*/



// Static Member Function in C ++
/*• By declaring a member function as static, you make it independent of any
particular object of the class.A static member function can be called even if
no objects of the class exist and the static functions are accessed using only
the class name and the scope resolution operator(::)*/

/*• A static member function can only access static data member,other static
member functions and any other functions from outside the class.*/

/*• Static member functions have a class scope and they do not have access to
the this pointer of the class.*/

/*• You could use a static member function to determine whether some objects
of the class have been created or not.*/

class MyClass
{
public:
    int x;
    static int count;//you can only declare static but cannot initialize
    
    MyClass(){
        count++;
    }
    static int getCount(){
        return count;//can only return static member
    }
};

int MyClass::count=0;//can be initialized outside using scope resolution operator

int main(){
    cout<<"initial count:"<<MyClass::count<<endl;//we do not need an object to access the static variable
    MyClass obj1;
    cout<<"Count after one object: "<<MyClass::count<<endl;
    MyClass obj2,obj3;
    cout<<MyClass::count<<endl;
    cout<<MyClass::getCount()<<endl;
    return 0;
}
