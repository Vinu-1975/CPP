#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cout<<"enter string: ";
    getline(cin,a);
    string b=a;
    int choice;
    do{
        cout<<"0.Exit"<<endl;
        cout<<"1.uppercase"<<endl;
        cout<<"2.lowercase"<<endl;
        cout<<"3.Original"<<endl;
        cout<<"enter choice:";
        cin>>choice;

        if(choice==1){
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] >= 'a' && a.at(i) <= 'z')
                {
                    a[i] -= 32;
                }
            }
            cout << a << endl;
        }else if(choice==2){
            for(int i=0;i<a.length();i++){
                if(a[i]>='A' && a[i]<='Z'){
                    a[i]+=32;
                }
            }
            cout<<a<<endl;
        }else if(choice==3){
            cout<<b<<endl;
        }
    }while(choice!=0);
    
}
