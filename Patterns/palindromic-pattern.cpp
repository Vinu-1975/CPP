//    1    
//   212
//  32123
// 4321234
//543212345
#include<iostream>
using namespace std;

int main(){
    int m,i,j;
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=(m-i);j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=m;j++){
            cout<<k;
            k--;
        }
        k=1;
        for(;j<(m+i);j++){
            k++;
            cout<<k;
        }for(;j<=(m*2-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
}