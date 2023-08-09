#include <iostream>
using namespace std;

int main() {
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int sum=0;
        while(N>0){
            int last_digit=N%10;
            N/=10;
            sum+=last_digit;
        }
        cout<<sum<<endl;
    }
    return 0;
}
