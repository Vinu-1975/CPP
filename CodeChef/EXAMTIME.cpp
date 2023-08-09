#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int dsa1,toc1,dm1,t1;
        cin>>dsa1>>toc1>>dm1;
        int dsa2,toc2,dm2,t2;
        cin>>dsa2>>toc2>>dm2;
        t1=dsa1+toc1+dm1;
        t2=dsa2+toc2+dm2;
        if(t1==t2){
            if(dsa1>dsa2){
                cout<<"Dragon"<<endl;
            }else if(dsa2>dsa1){
                cout<<"Sloth"<<endl;
            }else{
                if(toc1>toc2){
                    cout<<"Dragon"<<endl;
                }else if(toc2>toc1){
                    cout<<"Sloth"<<endl;
                }else{
                    if(dm1>dm2){
                        cout<<"Dragon"<<endl;
                    }else if(dm2>dm1){
                        cout<<"Sloth"<<endl;
                    }else{
                        cout<<"Tie"<<endl;
                    }
                }
            }
        }else if(t1>t2){
            cout<<"Dragon"<<endl;
        }else{
            cout<<"Sloth"<<endl;
        }
        
        
    }
}