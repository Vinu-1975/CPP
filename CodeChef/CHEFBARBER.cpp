#include <iostream>
using namespace std;

class saloon{
    private:
        int l,t;
    public:
    saloon(int a,int b)
    : l(a),t(b){
        
    }
    ~saloon(){
        cout<<l*t<<endl;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,tl;
        cin>>n>>tl;
        saloon(n,tl);
    }
    return 0;
}