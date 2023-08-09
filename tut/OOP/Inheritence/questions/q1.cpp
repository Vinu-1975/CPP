/*

Create two classes named Mammals and MarineAnimals. Create another class
named BlueWhale which inherits both the above classes.
Now, create a function in each of these classes which prints
"I am mammal", "I am a marine animal" and "I belong to both the categories:
Mammals as well as Marine Animals" respectively.
Now, create an object for each of the above class and try calling

1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale

*/
#include <iostream>
using namespace std;

class Mammals
{
    public: 
    void mammals(){
        cout<<"I am a Mammal"<<endl;
    }
};

class MarineAnimal
{
    public:
    void marineanimal(){
        cout<<"I am a marine animal"<<endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimal
{
    public:
    void bluewhale(){
        cout<<"I belong to both categories"<<endl;
    }
};

int main()
{
    Mammals m;
    m.mammals();
    MarineAnimal n;
    n.marineanimal();
    BlueWhale b;
    b.bluewhale();
    b.mammals();
    b.marineanimal();

}