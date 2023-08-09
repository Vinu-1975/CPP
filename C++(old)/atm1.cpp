#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int N;
    float B;
    cin>>N>>B;
    if(N%5==0 && N<B+0.50){
        cout<<fixed<<setprecision(2)<<B-(N+0.50)<<endl;

    }else{
        cout<<B;
    }
  

}
