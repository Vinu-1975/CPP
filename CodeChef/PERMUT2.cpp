#include<iostream> 
using namespace std;

void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        b[i]=i;
    }
    for(int i=1;i<=n;i++){
        c[i]=a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;i<=n;j++){
            if(b[j]==a[i]){
                int t;
                t=b[j];
                b[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
}