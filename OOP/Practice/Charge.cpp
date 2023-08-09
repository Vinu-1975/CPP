#include <iostream>
using namespace std;

class phone{
    public:
    int charge;
    phone(){
        charge=100;
    }
    void use(){
        charge-=10;
    }
    void getCharge(){
        cout<<charge;
    }
};

int main(){
    phone p;
    p.use();
    phone *ptr=&p;
    ptr->getCharge();


}