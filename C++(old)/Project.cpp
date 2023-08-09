/*you are making a program for a bus service.A bus can transport 50 passengers at once.Given the number of passengers waiting in the
 *  bus station as input,you need to calculate and output how many empty seats the last bus will have*/
#include<iostream.h>
using namespace std;

int main(){
    int total_passengers;
    cin>>total_passengers;
    cout<<"total passengers waiting:"<<total_passengers<<endl;
    int bus=50;
    int c=total_passengers%bus;
    if(c==0){
        cout<<"0 seats left";
    }else{
        cout<<"seat remaining:"<<bus-c<<endl;
    }
    return 0;
}    
